#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>
#include <QScrollBar>
#include <QVBoxLayout>
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QHBoxLayout *mainLayout = new QHBoxLayout();
    _mapView = new QMMapView(QMMapView::RoadMap,
                             QMCoordinate(-6.3639096, 106.8231237),
                             17);
    buildControls();
    mainLayout->addWidget(_mapView, 1);
    setLayout(mainLayout);

    resize(1550, 750);
    connect(_mapView, SIGNAL(mapLoaded()), this, SLOT(onMapLoaded()));
    connect(_mapView, SIGNAL(regionChanged(QMCoordinateRegion)),
            this, SLOT(onRegionChanged(QMCoordinateRegion)));
    connect(_mapView, SIGNAL(mapBecameIdle()), this, SLOT(onMapBecameIdle()));
    ui->label->setPixmap(QPixmap::grabWidget(_mapView, 1));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buildControls()
{
    QVBoxLayout *mainLayout = new QVBoxLayout();
    _logger = new QTextEdit();
    _logger->setReadOnly(true);
    mainLayout->addWidget(_logger, 1);
}

void MainWindow::log(QString text, QString delimiter)
{
    _logger->setPlainText(_logger->toPlainText() + delimiter + text);
    _logger->verticalScrollBar()->setSliderPosition(    // Scroll to bottom
                _logger->verticalScrollBar()->maximum());
}

void MainWindow::log(const char *text, QString delimiter)
{
    log(QString(text), delimiter);
}

void MainWindow::onMapLoaded()
{
    log("Loaded:");
    log(QString("Type %1 at (%2, %3) , zoom %4").arg(
            QString::number(_mapView->mapType()),
            QString::number(_mapView->center().latitude()),
            QString::number(_mapView->center().longitude()),
            QString::number(_mapView->zoomLevel())),
        " ");
}

void MainWindow::onMapBecameIdle()
{
    log("Idle");
}

void MainWindow::onRegionChanged(QMCoordinateRegion region)
{
    log("Region changed:");
    log(QString("((%1, %2), (%3, %4))").arg(
            QString::number(region.northWest().latitude()),
            QString::number(region.west()),
            QString::number(region.south()),
            QString::number(region.southEast().longitude())),
        " ");
}

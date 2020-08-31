#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Widget.h"
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Widget *map = new Widget();
    map->latitude= -6.3639096;
    map->longitude= 106.8231237;
    ui->widget->setLayout(map->mainLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

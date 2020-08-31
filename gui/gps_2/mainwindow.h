#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QTextEdit>
#include <QMMapView.h>
#include <QMCoordinateRegion.h>
#include <QHBoxLayout>
#include <QScrollBar>
#include <QVBoxLayout>
#include <QtDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();
public slots:
    void log(QString text, QString delimiter = QString("\n"));
    void log(const char *text, QString delimiter = QString("\n"));

private slots:
    void onMapLoaded();
    void onMapBecameIdle();
    void onRegionChanged(QMCoordinateRegion region);

private:
    Ui::MainWindow *ui;
    QMMapView *_mapView;
    QWidget *_controls;
    QTextEdit *_logger;
    void buildControls();
};

#endif // MAINWINDOW_H

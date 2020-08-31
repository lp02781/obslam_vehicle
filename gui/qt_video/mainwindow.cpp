#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVideoFrame>
#include <QPixmap>
#include <QImage>
#include <QMovie>
#include <QBitmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

}

MainWindow::~MainWindow()
{
    delete ui;
}

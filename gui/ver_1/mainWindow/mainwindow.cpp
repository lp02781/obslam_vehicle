#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->speed->setStyleSheet("color: white;");
    ui->latitude->setStyleSheet("color: white;");
    ui->longitude->setStyleSheet("color: white;");
    ui->compass->setStyleSheet("color: white;");
    ui->day->setStyleSheet("color: white;");
    ui->date->setStyleSheet("color: white;");
    ui->clock->setStyleSheet("color: white;");
    ui->status->setStyleSheet("color: white;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

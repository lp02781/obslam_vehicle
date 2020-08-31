#include "mainwindow.h"
#include <QApplication>

#include <QPixmap>
#include <QImage>
#include <QMovie>
#include <QBitmap>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QMovie *movie = new QMovie("/home/mfikih15/Downloads/ir.gif");
    QLabel *processLabel = new QLabel();
    processLabel->setMovie(movie);
    movie->start();
    processLabel->show();
    return a.exec();
}

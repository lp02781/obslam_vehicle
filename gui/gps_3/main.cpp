#include "mainwindow.h"
#include "Widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Widget x;
    //x.show();

    MainWindow w;
    w.show();


    return a.exec();
}

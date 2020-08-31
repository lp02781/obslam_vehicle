/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *speed;
    QLabel *speed_1;
    QLabel *speed_2;
    QLabel *speed_3;
    QLabel *speed_4;
    QLabel *speed_5;
    QLabel *speed_6;
    QLabel *speed_7;
    QLabel *speed_8;
    QLabel *latitude;
    QLabel *longitude;
    QLabel *compass;
    QLabel *day;
    QLabel *date;
    QLabel *clock;
    QLabel *status;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 728);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 6, 1011, 671));
        label->setPixmap(QPixmap(QString::fromUtf8("../fix.png")));
        speed = new QLabel(centralWidget);
        speed->setObjectName(QStringLiteral("speed"));
        speed->setGeometry(QRect(470, 70, 371, 191));
        QFont font;
        font.setFamily(QStringLiteral("Bitstream Charter"));
        font.setPointSize(200);
        speed->setFont(font);
        speed->setStyleSheet(QLatin1String("ui->speed->setStyleSheet(\"color: white;\");\n"
""));
        speed_1 = new QLabel(centralWidget);
        speed_1->setObjectName(QStringLiteral("speed_1"));
        speed_1->setGeometry(QRect(840, 280, 131, 21));
        speed_1->setPixmap(QPixmap(QString::fromUtf8("../hijau.jpg")));
        speed_2 = new QLabel(centralWidget);
        speed_2->setObjectName(QStringLiteral("speed_2"));
        speed_2->setGeometry(QRect(840, 250, 131, 21));
        speed_2->setPixmap(QPixmap(QString::fromUtf8("../hijau muda.png")));
        speed_3 = new QLabel(centralWidget);
        speed_3->setObjectName(QStringLiteral("speed_3"));
        speed_3->setGeometry(QRect(840, 220, 131, 21));
        speed_3->setPixmap(QPixmap(QString::fromUtf8("../kuning.jpg")));
        speed_4 = new QLabel(centralWidget);
        speed_4->setObjectName(QStringLiteral("speed_4"));
        speed_4->setGeometry(QRect(840, 190, 131, 21));
        speed_4->setPixmap(QPixmap(QString::fromUtf8("../kuning muda.png")));
        speed_5 = new QLabel(centralWidget);
        speed_5->setObjectName(QStringLiteral("speed_5"));
        speed_5->setGeometry(QRect(840, 160, 131, 21));
        speed_5->setPixmap(QPixmap(QString::fromUtf8("../orange.png")));
        speed_6 = new QLabel(centralWidget);
        speed_6->setObjectName(QStringLiteral("speed_6"));
        speed_6->setGeometry(QRect(840, 130, 131, 21));
        speed_6->setPixmap(QPixmap(QString::fromUtf8("../orange muda.png")));
        speed_7 = new QLabel(centralWidget);
        speed_7->setObjectName(QStringLiteral("speed_7"));
        speed_7->setGeometry(QRect(840, 100, 131, 21));
        speed_7->setPixmap(QPixmap(QString::fromUtf8("../merahmuda.jpg")));
        speed_8 = new QLabel(centralWidget);
        speed_8->setObjectName(QStringLiteral("speed_8"));
        speed_8->setGeometry(QRect(840, 70, 131, 21));
        speed_8->setPixmap(QPixmap(QString::fromUtf8("../merah.jpg")));
        latitude = new QLabel(centralWidget);
        latitude->setObjectName(QStringLiteral("latitude"));
        latitude->setGeometry(QRect(630, 470, 261, 61));
        QFont font1;
        font1.setPointSize(30);
        latitude->setFont(font1);
        longitude = new QLabel(centralWidget);
        longitude->setObjectName(QStringLiteral("longitude"));
        longitude->setGeometry(QRect(670, 540, 261, 61));
        longitude->setFont(font1);
        compass = new QLabel(centralWidget);
        compass->setObjectName(QStringLiteral("compass"));
        compass->setGeometry(QRect(80, 500, 131, 61));
        QFont font2;
        font2.setPointSize(40);
        compass->setFont(font2);
        day = new QLabel(centralWidget);
        day->setObjectName(QStringLiteral("day"));
        day->setGeometry(QRect(70, 90, 91, 51));
        QFont font3;
        font3.setPointSize(20);
        day->setFont(font3);
        date = new QLabel(centralWidget);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(170, 90, 141, 61));
        date->setFont(font3);
        clock = new QLabel(centralWidget);
        clock->setObjectName(QStringLiteral("clock"));
        clock->setGeometry(QRect(80, 150, 211, 61));
        clock->setFont(font2);
        status = new QLabel(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(80, 220, 211, 61));
        QFont font4;
        font4.setPointSize(35);
        status->setFont(font4);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        speed->setText(QApplication::translate("MainWindow", "42", Q_NULLPTR));
        speed_1->setText(QString());
        speed_2->setText(QString());
        speed_3->setText(QString());
        speed_4->setText(QString());
        speed_5->setText(QString());
        speed_6->setText(QString());
        speed_7->setText(QString());
        speed_8->setText(QString());
        latitude->setText(QApplication::translate("MainWindow", "-6.361150100", Q_NULLPTR));
        longitude->setText(QApplication::translate("MainWindow", "106.823587800", Q_NULLPTR));
        compass->setText(QApplication::translate("MainWindow", "37.86", Q_NULLPTR));
        day->setText(QApplication::translate("MainWindow", "Sunday", Q_NULLPTR));
        date->setText(QApplication::translate("MainWindow", "23-06-2020", Q_NULLPTR));
        clock->setText(QApplication::translate("MainWindow", "20:28:30", Q_NULLPTR));
        status->setText(QApplication::translate("MainWindow", "Status OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

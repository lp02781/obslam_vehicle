#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QString>
#include "playlist.h"
#include <QtMultimedia/QMediaPlayer>
#include "QTimer"
#include "QPalette"
#include "vector"
#include "QKeyEvent"
#include "QLineEdit"
#include <QPixmap>
#include <QImage>
#include <QMovie>
#include <QBitmap>
#include <QLabel>
#include "Widget.h"
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

using namespace std;
using namespace cv;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QByteArray request="1";
    QString old_batt_stat = "5";

    QMovie *ir_movie = new QMovie("/home/mfikih15/Downloads/ir.gif");
    QMovie *front_movie = new QMovie("/home/mfikih15/Downloads/front.gif");

    ~MainWindow();

public slots:
    void onReadyRead();

private slots:
    void on_main_window_clicked();

    void on_lidar_window_clicked();

    void on_map_window_clicked();

    void on_battery_window_clicked();

    void on_pose_window_clicked();

    void on_music_window_clicked();

    void on_add_clicked();

    void on_remove_clicked();

    void on_save_clicked();

    void on_play_clicked();

    void on_volumeBar_valueChanged(int value);

    void on_seekBar_sliderMoved(int position);

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_forward_clicked();

    void on_back_clicked();

    void on_mute_clicked();

    void on_repeat_clicked();

    void on_shuffle_clicked();

    void update();

    void on_searchBar_textChanged(const QString &arg1);

    void on_Engine_window_clicked();

    void on_Electrical_window_clicked();

    void update_window();

private:
    void updateList();

    void loadTrack();

    void next();

    void back();

    void shufflePlaylist();

    int getIndex();

    bool repeat = false;

    bool muted = false;

    bool shuffle = false;

    int lCounter = 0;

    Playlist playlist;


    Ui::MainWindow *ui;
    QTcpSocket  _socket;

    QTimer *updater = new QTimer(this);

    QMediaPlayer *player = new QMediaPlayer();

    vector<unsigned short int> shuffledPlaylist;

    QTimer *timer;
    VideoCapture cap_ir;
    VideoCapture cap_rgb;
    Mat frame_ir;
    Mat frame_rgb;
    QImage qt_image_ir;
    QImage qt_image_rgb;

protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // MAINWINDOW_H

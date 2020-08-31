#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QDebug>
#include <QHostAddress>
#include <QFileDialog>
#include <QDate>
#include <QTime>
#include <QLabel>
#include <QRectF>
#include "Widget.h"
#include <QHBoxLayout>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _socket(this)
{
  ui->setupUi(this);

  ir_movie->start();
  ui->ir_camera->setMovie(ir_movie);
  front_movie->start();
  ui->rgb_camera->setMovie(front_movie);
  audio_movie->start();
  ui->audio->setMovie(audio_movie);
  audio_movie->stop();

  this->setFixedSize(this->geometry().width(),this->geometry().height());
  updateList();
  connect(updater, SIGNAL(timeout()), this, SLOT(update()));
  player->setVolume(100);
  ui->listWidget->setCurrentRow(0);
  if(ui->listWidget->count() != 0){
    loadTrack();
    player->pause();
    updater->start();
  }

  ui->date->setStyleSheet("color: white;");
  ui->clock->setStyleSheet("color: white;");

  ui->speed->setStyleSheet("color: white;");
  ui->rpm->setStyleSheet("color: white;");
  ui->throttle->setStyleSheet("color: white;");
  ui->humidity->setStyleSheet("color: white;");
  ui->temperature->setStyleSheet("color: white;");
  ui->engine_load->setStyleSheet("color: white;");
  ui->engine_load_text->setStyleSheet("color: white;");
  ui->speed_text->setStyleSheet("color: white;");
  ui->rpm_text->setStyleSheet("color: white;");
  ui->throttle_text->setStyleSheet("color: white;");
  ui->sub_battery_capacity->setStyleSheet("color: white;");
  ui->sub_engine_status->setStyleSheet("color: white;");


  ui->label_8->setStyleSheet("color: white;");
  ui->label_9->setStyleSheet("color: white;");
  ui->label_10->setStyleSheet("color: white;");
  ui->label_11->setStyleSheet("color: white;");
  ui->label_12->setStyleSheet("color: white;");
  ui->label_13->setStyleSheet("color: white;");
  ui->label_14->setStyleSheet("color: white;");
  ui->scan_time->setStyleSheet("color: white;");

  ui->time_inc->setStyleSheet("color: white;");
  ui->range_size->setStyleSheet("color: white;");
  ui->range_min->setStyleSheet("color: white;");
  ui->range_max->setStyleSheet("color: white;");
  ui->count->setStyleSheet("color: white;");
  ui->not_count->setStyleSheet("color: white;");


  ui->air_press->setStyleSheet("color: white;");
  ui->air_press_txt->setStyleSheet("color: white;");
  ui->air_temp->setStyleSheet("color: white;");
  ui->air_temp_txt->setStyleSheet("color: white;");
  ui->engine_load_val->setStyleSheet("color: white;");
  ui->engine_load_txt->setStyleSheet("color: white;");
  ui->throttle_txt->setStyleSheet("color: white;");
  ui->throttle_val->setStyleSheet("color: white;");

  ui->disc_current->setStyleSheet("color: white;");
  ui->disc_current_txt->setStyleSheet("color: white;");
  ui->duration->setStyleSheet("color: white;");
  ui->health->setStyleSheet("color: white;");
  ui->health_txt->setStyleSheet("color: white;");
  ui->batt_cap->setStyleSheet("color: white;");
  ui->voltage->setStyleSheet("color: white;");
  ui->voltage_text->setStyleSheet("color: white;");

  ui->currentSong->setStyleSheet("color: white;");

  _socket.connectToHost(QHostAddress("127.0.0.1"), 8080);
  connect(&_socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_main_window_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    request = "1";
}

void MainWindow::on_lidar_window_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    request = "2";
}

void MainWindow::on_map_window_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    request = "3";
}

void MainWindow::on_Engine_window_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    request = "4";
}

void MainWindow::on_Electrical_window_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    request = "5";
}

void MainWindow::on_battery_window_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    request = "6";
}

void MainWindow::on_music_window_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    request = "7";
}


void MainWindow::onReadyRead()
{

    QDate date_str = QDate::currentDate();
    ui->date->setText(date_str.toString());
    QTime time_Str = QTime::currentTime();
    ui->clock->setText(time_Str.toString());

    QByteArray datas = _socket.readAll();
    //qDebug() << datas;
    _socket.write(request);

    QList<QByteArray> lines = datas.split('/');

    if (lines[0] == "1"){
        //speed 100-0
        qDebug() << "panel :" + lines[0];
        qDebug() << "batt_stat :" + lines[1];
        qDebug() << "eng_status :" + lines[2];
        qDebug() << "batt_cap :" + lines[3];
        qDebug() << "speed :" + lines[4];
        qDebug() << "throttle :" + lines[5];
        qDebug() << "rpm :" + lines[6];
        qDebug() << "eng_load :" + lines[7];
        qDebug() << "temp :" + lines[8];
        qDebug() << "humid :" + lines[9];
        qDebug() << "";

        ui->sub_battery_capacity->setText(lines[3]+"%");
        ui->sub_engine_status->setText(lines[2]);

        ui->throttle->setText(lines[5]+"%");
        ui->speed->setText(lines[4]);
        ui->rpm->setText(lines[6]);
        ui->engine_load->setText(lines[7]+"%");
        ui->temperature->setText(lines[8]+"c");
        ui->humidity->setText(lines[9]+"%");

        if(lines[4].toInt()>= 0 && lines[4].toInt()< 15){
            ui->speed_1->show();
            ui->speed_2->hide();
            ui->speed_3->hide();
            ui->speed_4->hide();
            ui->speed_5->hide();
            ui->speed_6->hide();
            ui->speed_7->hide();
        }
        else if(lines[4].toInt()>= 15 && lines[4].toInt()< 30){
            ui->speed_1->show();
            ui->speed_2->show();
            ui->speed_3->hide();
            ui->speed_4->hide();
            ui->speed_5->hide();
            ui->speed_6->hide();
            ui->speed_7->hide();
        }
        else if(lines[4].toInt()>= 30 && lines[4].toInt()< 45){
            ui->speed_1->show();
            ui->speed_2->show();
            ui->speed_3->show();
            ui->speed_4->hide();
            ui->speed_5->hide();
            ui->speed_6->hide();
            ui->speed_7->hide();
        }
        else if(lines[4].toInt()>= 45 && lines[4].toInt()< 60){
            ui->speed_1->show();
            ui->speed_2->show();
            ui->speed_3->show();
            ui->speed_4->show();
            ui->speed_5->hide();
            ui->speed_6->hide();
            ui->speed_7->hide();
        }
        else if(lines[4].toInt()>= 60 && lines[4].toInt()< 75){
            ui->speed_1->show();
            ui->speed_2->show();
            ui->speed_3->show();
            ui->speed_4->show();
            ui->speed_5->show();
            ui->speed_6->hide();
            ui->speed_7->hide();
        }
        else if(lines[4].toInt()>= 75 && lines[4].toInt()< 90){
            ui->speed_1->show();
            ui->speed_2->show();
            ui->speed_3->show();
            ui->speed_4->show();
            ui->speed_5->show();
            ui->speed_6->show();
            ui->speed_7->hide();
        }
        else if(lines[4].toInt()>= 90){
            ui->speed_1->show();
            ui->speed_2->show();
            ui->speed_3->show();
            ui->speed_4->show();
            ui->speed_5->show();
            ui->speed_6->show();
            ui->speed_7->show();
        }

    }
    else if (lines[0]=="2"){
        qDebug() << "panel :" + lines[0];
        qDebug() << "batt_stat :" + lines[1];
        qDebug() << "eng_status :" + lines[2];
        qDebug() << "batt_cap :" + lines[3];
        qDebug() << "ang_inc :" + lines[4];
        qDebug() << "time_inc :" + lines[5];
        qDebug() << "scan_time :" + lines[6];
        qDebug() << "range_min :" + lines[7];
        qDebug() << "range_max :" + lines[8];
        qDebug() << "range_size :" + lines[9];
        qDebug() << "not_count :" + lines[10];
        qDebug() << "count :" + lines[11];
        for (int i = 0; i<24; i++){
            qDebug() << "lidar :" + lines[i+12];
        }
        qDebug() << "";

        ui->sub_battery_capacity->setText(lines[3]+"%");
        ui->sub_engine_status->setText(lines[2]);


        ui->time_inc->setText(lines[5]);
        ui->scan_time->setText(lines[6]);
        ui->range_min->setText(lines[7]);
        ui->range_max->setText(lines[8]);
        ui->range_size->setText(lines[9]);
        ui->count->setText(lines[11]);
        ui->not_count->setText(lines[10]);

        //690, 460
        if(lines[25] == "inf"){
            ui->lidar_8->move(960,510);
        }
        else{
            int x = 960;
            int y = 510;

            ui->lidar_8->move(690+(x-690)*(40-lines[25].toFloat())/40, 460+(y-460)*(40-lines[25].toFloat())/40);
        }


        //690, 320
        if(lines[26] == "inf"){
            ui->lidar_9->move(920,570);
        }
        else{
            int x = 920;
            int y = 570;

            ui->lidar_9->move(690+(x-690)*(40-lines[26].toFloat())/40, 460+(y-460)*(40-lines[26].toFloat())/40);
        }


        //690, 320
        if(lines[27] == "inf"){
            ui->lidar_10->move(850,620);
        }
        else{
            int x = 850;
            int y = 620;

            ui->lidar_10->move(690+(x-690)*(40-lines[27].toFloat())/40, 460+(y-460)*(40-lines[27].toFloat())/40);
        }


        //690, 320
        if(lines[28] == "inf"){
            ui->lidar_11->move(770,650);
        }
        else{
            int x = 770;
            int y = 650;

            ui->lidar_11->move(690+(x-690)*(40-lines[28].toFloat())/40, 460+(y-460)*(40-lines[28].toFloat())/40);
        }


        //690, 320
        if(lines[29] == "inf"){
            ui->lidar_12->move(680,660);
        }
        else{
            int x = 680;
            int y = 660;

            ui->lidar_12->move(690+(x-690)*(40-lines[29].toFloat())/40, 460+(y-460)*(40-lines[29].toFloat())/40);
        }


        //690, 320
        if(lines[30] == "inf"){
            ui->lidar_13->move(600,640);
        }
        else{
            int x = 600;
            int y = 640;

            ui->lidar_13->move(690+(x-690)*(40-lines[30].toFloat())/40, 460+(y-460)*(40-lines[30].toFloat())/40);
        }


        //690, 320
        if(lines[31] == "inf"){
            ui->lidar_14->move(530,590);
        }
        else{
            int x = 530;
            int y = 590;

            ui->lidar_14->move(690+(x-690)*(40-lines[31].toFloat())/40, 460+(y-460)*(40-lines[31].toFloat())/40);
        }


        //690, 320
        if(lines[32] == "inf"){
            ui->lidar_15->move(460,510);
        }
        else{
            int x = 460;
            int y = 510;

            ui->lidar_15->move(690+(x-690)*(40-lines[32].toFloat())/40, 460+(y-460)*(40-lines[32].toFloat())/40);
        }

    }
    else if (lines[0]=="3"){
        qDebug() << "panel :" + lines[0];
        qDebug() << "batt_stat :" + lines[1];
        qDebug() << "eng_status :" + lines[2];
        qDebug() << "batt_cap :" + lines[3];
        qDebug() << "latitude :" + lines[4];
        qDebug() << "longitude :" + lines[5];
        qDebug() << "compass :" + lines[6];
        qDebug() << "altitude :" + lines[7];
        qDebug() << "";

        Widget *map = new Widget();
        map->latitude= lines[4].toFloat();
        map->longitude= lines[5].toFloat();
        ui->widget->update();
        ui->widget->setLayout(map->mainLayout);

        ui->sub_battery_capacity->setText(lines[3]+"%");
        ui->sub_engine_status->setText(lines[2]);
    }
    else if (lines[0]=="4"){
        qDebug() << "panel :" + lines[0];
        qDebug() << "batt_stat :" + lines[1];
        qDebug() << "eng_status :" + lines[2];
        qDebug() << "batt_cap :" + lines[3];
        qDebug() << "air_press :" + lines[4];
        qDebug() << "air_temp :" + lines[5];
        qDebug() << "engine_load :" + lines[6];
        qDebug() << "throttle :" + lines[7];
        qDebug() << "";

        ui->sub_battery_capacity->setText(lines[3]+"%");
        ui->sub_engine_status->setText(lines[2]);

        ui->air_press->setText(lines[4]+"psi");
        ui->air_temp->setText(lines[5]+"c");
        ui->engine_load_val->setText(lines[6]+"%");
        ui->throttle_val->setText(lines[7]+"%");
    }
    else if (lines[0]=="5"){
        qDebug() << "panel :" + lines[0];
        qDebug() << "batt_stat :" + lines[1];
        qDebug() << "eng_status :" + lines[2];
        qDebug() << "batt_cap :" + lines[3];
        qDebug() << "current :" + lines[4];
        qDebug() << "efficiency :" + lines[5];
        qDebug() << "load :" + lines[6];
        qDebug() << "torque :" + lines[7];
        qDebug() << "voltage :" + lines[8];
        qDebug() << "";

        ui->sub_battery_capacity->setText(lines[3]+"%");
        ui->sub_engine_status->setText(lines[2]);

        ui->current_val->setText(lines[4]+"A");
        ui->efficiency->setText(lines[5]+"%");
        ui->load->setText(lines[6]+"%");
        ui->torque->setText(lines[7]);
        ui->volt_val->setText(lines[8]+"v");

    }
    else if (lines[0]=="6"){
        //batt 0-100
        qDebug() << "panel :" + lines[0];
        qDebug() << "batt_stat :" + lines[1];
        qDebug() << "eng_status :" + lines[2];
        qDebug() << "batt_cap :" + lines[3];
        qDebug() << "discharge :" + lines[4];
        qDebug() << "hours :" + lines[5];
        qDebug() << "minutes :" + lines[6];
        qDebug() << "second :" + lines[7];
        qDebug() << "health :" + lines[8];
        qDebug() << "voltage :" + lines[9];
        qDebug() << "";

        ui->sub_battery_capacity->setText(lines[3]+"%");
        ui->sub_engine_status->setText(lines[2]);

        ui->batt_cap->setText(lines[3]+"%");
        ui->disc_current->setText(lines[4]+"C");
        ui->duration->setText(lines[5]+"H "+lines[6]+"M "+lines[7]+"S");
        ui->health->setText(lines[8]);
        ui->voltage->setText(lines[9]+"V");

        if(lines[3].toInt()>= 0 && lines[3].toInt()<10){
            ui->batt_1->hide();
            ui->batt_2->hide();
            ui->batt_3->hide();
            ui->batt_4->hide();
            ui->batt_5->hide();
            ui->batt_6->hide();
            ui->batt_7->hide();
            ui->batt_8->hide();
            ui->batt_9->hide();
        }
        if(lines[3].toInt()>= 10 && lines[3].toInt()<20){
            ui->batt_1->show();
            ui->batt_2->hide();
            ui->batt_3->hide();
            ui->batt_4->hide();
            ui->batt_5->hide();
            ui->batt_6->hide();
            ui->batt_7->hide();
            ui->batt_8->hide();
            ui->batt_9->hide();
        }
        if(lines[3].toInt()>= 20 && lines[3].toInt()<30){
            ui->batt_1->show();
            ui->batt_2->show();
            ui->batt_3->hide();
            ui->batt_4->hide();
            ui->batt_5->hide();
            ui->batt_6->hide();
            ui->batt_7->hide();
            ui->batt_8->hide();
            ui->batt_9->hide();
        }
        if(lines[3].toInt()>= 30 && lines[3].toInt()<40){
            ui->batt_1->show();
            ui->batt_2->show();
            ui->batt_3->show();
            ui->batt_4->hide();
            ui->batt_5->hide();
            ui->batt_6->hide();
            ui->batt_7->hide();
            ui->batt_8->hide();
            ui->batt_9->hide();
        }
        if(lines[3].toInt()>= 40 && lines[3].toInt()<50){
            ui->batt_1->show();
            ui->batt_2->show();
            ui->batt_3->show();
            ui->batt_4->show();
            ui->batt_5->hide();
            ui->batt_6->hide();
            ui->batt_7->hide();
            ui->batt_8->hide();
            ui->batt_9->hide();
        }
        if(lines[3].toInt()>= 50 && lines[3].toInt()<60){
            ui->batt_1->show();
            ui->batt_2->show();
            ui->batt_3->show();
            ui->batt_4->show();
            ui->batt_5->show();
            ui->batt_6->hide();
            ui->batt_7->hide();
            ui->batt_8->hide();
            ui->batt_9->hide();
        }
        if(lines[3].toInt()>= 60 && lines[3].toInt()<70){
            ui->batt_1->show();
            ui->batt_2->show();
            ui->batt_3->show();
            ui->batt_4->show();
            ui->batt_5->show();
            ui->batt_6->show();
            ui->batt_7->hide();
            ui->batt_8->hide();
            ui->batt_9->hide();
        }
        if(lines[3].toInt()>= 70 && lines[3].toInt()<80){
            ui->batt_1->show();
            ui->batt_2->show();
            ui->batt_3->show();
            ui->batt_4->show();
            ui->batt_5->show();
            ui->batt_6->show();
            ui->batt_7->show();
            ui->batt_8->hide();
            ui->batt_9->hide();
        }
        if(lines[3].toInt()>= 80 && lines[3].toInt()<90){
            ui->batt_1->show();
            ui->batt_2->show();
            ui->batt_3->show();
            ui->batt_4->show();
            ui->batt_5->show();
            ui->batt_6->show();
            ui->batt_7->show();
            ui->batt_8->show();
            ui->batt_9->hide();
        }
        if(lines[3].toInt()>=90){
            ui->batt_1->show();
            ui->batt_2->show();
            ui->batt_3->show();
            ui->batt_4->show();
            ui->batt_5->show();
            ui->batt_6->show();
            ui->batt_7->show();
            ui->batt_8->show();
            ui->batt_9->show();
        }
    }
    else if (lines[0]=="7"){
        qDebug() << "panel :" + lines[0];
        qDebug() << "batt_stat :" + lines[1];
        qDebug() << "eng_status :" + lines[2];
        qDebug() << "batt_cap :" + lines[3];
        qDebug() << "";

        ui->sub_battery_capacity->setText(lines[3]+"%");
        ui->sub_engine_status->setText(lines[2]);
    }
    else {
        qDebug()<<"data failed";
    }

    if (lines[1]=="CHARGE" && old_batt_stat == "ON"){
        ui->stackedWidget->setCurrentIndex(5);
        request = "6";
    }
    old_batt_stat = lines [1];
}

void MainWindow::on_add_clicked()
{   bool startUpdater = false;if(ui->listWidget->count() == 0) startUpdater = true;
    QStringList files = QFileDialog::getOpenFileNames(this, tr("Select Music Files"));
    if(!files.empty())
    {
        playlist.add(files);
        updateList();
        ui->save->setChecked(false);
        if(shuffle) shufflePlaylist();
        if(startUpdater) updater->start();
    }
}

void MainWindow::on_remove_clicked()
{
    int index = getIndex();
    if(index != -1)
    {
       playlist.remove(index);
       updateList();
       ui->listWidget->setCurrentRow(index);
       ui->save->setChecked(false);
       if(shuffle) shufflePlaylist();
    }
}

void MainWindow::on_save_clicked()
{
    playlist.save();
    ui->save->setChecked(true);
}


void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    lCounter = getIndex();

    ui->play->setChecked(false);
    ui->searchBar->clear();

    loadTrack();
    player->play();
    audio_movie->start();
}


void MainWindow::on_play_clicked()
{
    if(ui->listWidget->count() != 0)
    if(player->state() == QMediaPlayer::PlayingState)
    {
        player->pause();
        audio_movie->stop();
    }
   else
   {
        player->play();
        updater->start();
        audio_movie->start();
   }
}

void MainWindow::on_forward_clicked()
{   if(ui->listWidget->count() != 0)
    if(repeat)
    {
        repeat = !repeat;next();repeat = !repeat;
    }
    else
    {
        next();
    }
}

void MainWindow::on_back_clicked()
{   if(ui->listWidget->count() != 0)
    if(player->position() > 3000)
    {
       player->setPosition(0);
    }
    else
    {
        back();
    }
}

void MainWindow::on_volumeBar_valueChanged(int value)
{
    player->setVolume(value);
    (value != 0)?ui->mute->setChecked(false):ui->mute->setChecked(true);
}

void MainWindow::on_seekBar_sliderMoved(int position)
{
    player->setPosition(player->duration() / 1000 * position);
}

void MainWindow::on_mute_clicked()
{
    muted = !muted;
    (muted)?player->setVolume(0):player->setVolume(ui->volumeBar->value());
}


void MainWindow::on_repeat_clicked()
{
     repeat = !repeat;
}


void MainWindow::on_shuffle_clicked()
{
    shuffle = !shuffle;
    if(shuffle)
        shufflePlaylist();
}

void MainWindow::update()
{   if(!ui->seekBar->isSliderDown())
        ui->seekBar->setValue((double)player->position()/player->duration() * 1000);

    if(player->state() == QMediaPlayer::StoppedState)
    {
        next();
    }
}

void MainWindow::updateList()
{
    ui->listWidget->clear();
    ui->listWidget->addItems(playlist.getTracksNameList());
}

int MainWindow::getIndex()
{
    return ui->listWidget->currentIndex().row();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Return :
    {
        lCounter = getIndex();
        if(lCounter != -1)
        {
            ui->play->setChecked(false);
            ui->searchBar->clear();

           loadTrack();
           player->play();
        }
        break;
    }
    case Qt::Key_Up :
    {
        int ind = getIndex() - 1;if(ind < 0)ind = ui->listWidget->count() - 1;
        ui->listWidget->setCurrentRow(ind);
        break;
    }
    case Qt::Key_Down :
    {
        int ind = getIndex() + 1;if(ind >= ui->listWidget->count())ind = 0;
        ui->listWidget->setCurrentRow(ind);
        break;
    }
    default :
    {
        ui->searchBar->setFocus();

        break;
    }
    }
}

void MainWindow::next()
{
    lCounter++;

    if(repeat)
    {
        lCounter--;
    }

    if(lCounter >= ui->listWidget->count())
        lCounter = 0;

    (!shuffle or repeat) ? ui->listWidget->setCurrentRow(lCounter) : ui->listWidget->setCurrentRow(shuffledPlaylist[lCounter]);

    ui->play->setChecked(false);
    ui->searchBar->clear();

    loadTrack();
    player->play();

}

void MainWindow::back()
{
     lCounter--;

     if(lCounter < 0)
        lCounter = ui->listWidget->count() - 1;


     (!shuffle) ? ui->listWidget->setCurrentRow(lCounter) : ui->listWidget->setCurrentRow(shuffledPlaylist[lCounter]);

     ui->play->setChecked(false);
     ui->searchBar->clear();

     loadTrack();
     player->play();
}

void MainWindow::shufflePlaylist()
{
    shuffledPlaylist.resize(0);

    for(int i = 0; i < ui->listWidget->count(); i++)
    {
        shuffledPlaylist.push_back(i);
    }

    random_shuffle(shuffledPlaylist.begin(), shuffledPlaylist.end());
}

void MainWindow::loadTrack()
{
     QString qstr = QString::fromStdString(playlist.tracks[getIndex()].getLocation());
     player->setMedia(QUrl::fromLocalFile(qstr));
     qstr = QString::fromStdString(playlist.tracks[getIndex()].getName());
     ui->currentSong->setText(qstr);
}

void MainWindow::on_searchBar_textChanged(const QString &arg1)
{
    if(ui->searchBar->text().toStdString() != "")
    for(int i = 0; i < ui->listWidget->count(); i++)
    {
        if(ui->listWidget->item(i)->text().toLower().toStdString().find(arg1.toLower().toStdString()) != string::npos )
        {
            ui->listWidget->setCurrentRow(i);
            break;
        }
    }

}





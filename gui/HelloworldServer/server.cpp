#include "server.h"
#include "ui_server.h"

Server::Server(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);
}

Server::~Server()
{
    delete ui;
}

void Server::on_pushButtonStart_clicked()
{
    m_pBoxServer = new HelloworldServer(this);
        bool success = m_pBoxServer->listen(QHostAddress::Any, quint16(ui->textEditPort->toPlainText().toInt()));
        if(!success){
            addMessage("server failed...");
        }
        else{
            addMessage("server started...");
        }
}

void Server::addMessage(QString Msg){
    ui->textEditMessage->setText(Msg);
}

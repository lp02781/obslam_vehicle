#include "client.h"
#include "ui_client.h"
#include <QMessageBox>

Client::Client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Client)
{
    m_clientSocket = new QTcpSocket(this);
    ui->setupUi(this);
}

Client::~Client()
{
    delete ui;
}

void Client::on_pushButtonConnect_clicked()
{
    m_clientSocket->connectToHost(ui->textEditIPAddress->toPlainText(), quint16(ui->textEditPort->toPlainText().toInt()));
    connect(m_clientSocket, SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(displayError(QAbstractSocket::SocketError)));
}

void Client::on_pushButtonSend_clicked()
{

}

void Client::displayError(QAbstractSocket::SocketError socketError){
    switch(socketError){
        case QAbstractSocket::RemoteHostClosedError:
            break;
        case QAbstractSocket::HostNotFoundError:
            QMessageBox::information(this, tr("Fortune Client"),
                                    tr("The host was not found. please check the"
                                        "host name and port settings."));
            break;
        case QAbstractSocket::ConnectionRefusedError:
            QMessageBox::information(this, tr("Fortune Client"),
                                    tr("The connection was refused by the peer."
                                        "Make sure the fortune server is running,"
                                        "and check that the host name and port"
                                        "settings are correct."));
        default:
            QMessageBox::information(this, tr("Fortune Client"),
                                     tr("The following error occurred: %1.")
                                     .arg(m_clientSocket->errorString()));
    }
}

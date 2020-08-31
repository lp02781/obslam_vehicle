#include "helloworldserver.h"

HelloworldServer::HelloworldServer(Server *pHelloServer, QObject *parent):QTcpServer(parent)
{
    m_pHelloWindow=pHelloServer;
}

void HelloworldServer::incomingConnection(int socketfd){
    QTcpSocket *client = new QTcpSocket(this);
    client->setSocketDescriptor(socketfd);
    clients.insert(client);

    m_pHellowWindow->addMessage("New Client from: "+client->peerAddress().toString()) ;

    connect(client, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(client, SIGNAL(disconnected()), this, SLOT(disconnected()));
}

void HelloworldServer::readyRead(){
    QTcpSocket *client = (QTcpSocket*)sender();
    while(client->canReadLine()){
        QString line = QString::fromUtf8(client->readLine()).trimmer();
        m_pHelloWindow->addMessage(line);
    }
}

void HelloworldServer::disconnect(){
    QTcpSocket *client = (QTcpSocket*)sender();
    qDebug()<<"client disconnected:" << client->peerAddress().toString();
    clients.remove(client);
}

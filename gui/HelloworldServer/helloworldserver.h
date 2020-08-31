#ifndef HELLOWORLDSERVER_H
#define HELLOWORLDSERVER_H
#include <QTcpServer>
#include "server.h"
class Server;
class HelloworldServer : public QTcpServer
{
public:
    //HelloworldServer();
    HelloworldServer(Server* pHelloServer, QObject *parent=0);
    Server* m_pHelloWindow;
        void addMessage(QString Msg);
        HelloworldServer* m_pBoxServer;

        private slots:
            void readyRead();
            void disconnect();

        protected:
            void incomingConnection(int socketfd);

        private:
            QSet<QTcpSocket*> clients;

};

#endif // HELLOWORLDSERVER_H

#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include "helloworldserver.h"

namespace Ui {
class Server;
}

class Server : public QMainWindow
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = 0);
    ~Server();
    void addMessage(QString);
    HelloworldServer m_pBoxServer;

private slots:
    void on_pushButtonStart_clicked();

private:
    Ui::Server *ui;
};

#endif // SERVER_H

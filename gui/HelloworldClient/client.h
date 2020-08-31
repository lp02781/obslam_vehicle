#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>
namespace Ui {
class Client;
}

class Client : public QMainWindow
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = 0);
    ~Client();
    QTcpSocket *m_clientSocket;

private slots:
    void on_pushButtonConnect_clicked();

    void on_pushButtonSend_clicked();
    void displayError(QAbstractSocket::SocketError socketError);

private:
    Ui::Client *ui;
};

#endif // CLIENT_H

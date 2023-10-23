#include "myserver.h"

MyServer::MyServer(QObject *parent) : QTcpServer(parent)
{

}

void MyServer::StartServer()
{
    if (listen(QHostAddress::Any,1999))
        {
        qDebug() << "started...";
        }
    else
    {
         qDebug() << "not started";
    }
}

void MyServer::incomingConnection(qintptr handle)
{
    MyClient *client = new MyClient(this);
    client->SetSocket(handle);
}

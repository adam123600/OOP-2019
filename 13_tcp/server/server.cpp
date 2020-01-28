#include "server.h"

#include "connection.h"
#include <QDebug>

Server::Server(QObject *parent) : QObject(parent)
{
    connect(&server, SIGNAL(newConnection()), this, SLOT(newConnection()));

    server.listen(QHostAddress::LocalHost, 8000);

    qDebug() << "Listening for connections...";
}

void Server::newConnection()
{
    qDebug() << "Handling new connection...";

    new Connection{server.nextPendingConnection(), this};
}

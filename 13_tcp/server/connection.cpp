#include "connection.h"

#include <QDebug>
#include <QHostAddress>
#include <QTextStream>

Connection::Connection(QTcpSocket* socket, QObject *parent) : QObject(parent), socket(socket)
{
    qDebug() << socket->peerAddress().toString() << ":" << socket->peerPort() << " connected";

    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
}

void Connection::disconnected()
{
    qDebug() << socket->peerAddress().toString() << ":" << socket->peerPort() << " disconnected";
    deleteLater();
}

void Connection::readyRead()
{
    qDebug() << socket->peerAddress().toString() << ":" << socket->peerPort() << " read";

    QTextStream stream{socket};

    stream << stream.readAll().toUpper() << "\n";
}

#ifndef CONNECTION_H
#define CONNECTION_H

#include <QObject>
#include <QTcpSocket>

class Connection : public QObject
{
    Q_OBJECT
public:
    explicit Connection(QTcpSocket* socket, QObject *parent = nullptr);

signals:

public slots:
    void disconnected();
    void readyRead();

private:
    QTcpSocket* socket;
};

#endif // CONNECTION_H

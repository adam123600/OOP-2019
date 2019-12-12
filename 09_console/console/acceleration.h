#ifndef ACCELERATION_H
#define ACCELERATION_H

#include <QObject>

class acceleration : public QObject
{
    Q_OBJECT
public:
    explicit acceleration(QObject *parent = nullptr);

signals:

public slots:
    void onSpeedChanged(double v);
};

#endif // ACCELERATION_H

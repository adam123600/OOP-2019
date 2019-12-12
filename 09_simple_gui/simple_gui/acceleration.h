#ifndef ACCELERATION_H
#define ACCELERATION_H

#include <QObject>

class acceleration : public QObject
{
    Q_OBJECT
public:
    explicit acceleration(QObject *parent = nullptr);

signals:
    void changed(double v);

public slots:
    void onSpeedChanged(double v);

private:
    double przy1;
    double przy2;
    int flag1;
    int flag2;
};

#endif // ACCELERATION_H

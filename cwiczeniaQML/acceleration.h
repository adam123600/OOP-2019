#ifndef ACCELERATION_H
#define ACCELERATION_H

#include <QObject>

class acceleration : public QObject
{
    Q_OBJECT

    Q_PROPERTY(double value NOTIFY changed)
public:
    explicit acceleration(QObject *parent = nullptr);

signals:
    void changed(double v);

public slots:
    void onSpeedChanged(double v);

private:
    double przy1;
};

#endif // ACCELERATION_H

#include "acceleration.h"
#include <QDebug>

acceleration::acceleration(QObject *parent) : QObject(parent)
{
    przy1 = 0;
}

double acceleration::get()
{
    return przy2 - przy1;
}

void acceleration::onSpeedChanged(double v)
{
    przy1 = przy2;
    przy2 = v;

    emit changed(get());

    qDebug() << "[Acceleration] Value: " << v;
}

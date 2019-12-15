#include "acceleration.h"
#include <QDebug>

acceleration::acceleration(QObject *parent) : QObject(parent)
{
    przy1 = 0;

}

void acceleration::onSpeedChanged(double v)
{
    auto temp = v - this->przy1;
    this->przy1 = v;

    if( temp>0 )
        emit changed( temp );

    else
        emit changed(0);

    qDebug() << "[Acceleration] Value: " << v;

}

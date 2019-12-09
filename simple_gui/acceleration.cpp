#include "acceleration.h"
#include <QtDebug>

Acceleration::Acceleration(QObject *parent) : QObject(parent)
{

}

void Acceleration::onSpeedChanged(double v)
{
    qDebug() << "[Acceleration] Displacement changed to: " << v;
    //emit changed(v);
}


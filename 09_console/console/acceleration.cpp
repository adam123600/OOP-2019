#include "acceleration.h"
#include <QDebug>

acceleration::acceleration(QObject *parent) : QObject(parent)
{

}

void acceleration::onSpeedChanged(double v)
{
    qDebug() << "[Acc] Value: " << v;
}

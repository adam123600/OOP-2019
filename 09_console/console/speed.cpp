#include "speed.h"
#include <QDebug>

speed::speed(QObject *parent) : QObject(parent)
{

}

void speed::onDisplacementChanged(double v)
{
    qDebug() << "[Speed] Value: " << v;
    emit changed(v);
}

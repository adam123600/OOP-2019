#include "displacement.h"
#include <QDebug>

displacement::displacement(QObject *parent) : QObject(parent)
{

}

void displacement::set(double v)
{
    value = v;
    emit changed(value);

    qDebug() << "[Disp] Value: " << v;
}

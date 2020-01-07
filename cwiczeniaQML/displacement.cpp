#include "displacement.h"
#include <QDebug>

displacement::displacement(QObject *parent) : QObject(parent)
{

}

void displacement::doSomething()
{
    set(get() + 1);
    //qDebug() << "ASD";
}

void displacement::set(double v)
{
    value = v;
    emit changed(value);

    qDebug() << "[Disp] Value: " << v;
}

double displacement::get()
{
    return value;
}

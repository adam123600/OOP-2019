#include "demo.h"

#include <QDebug>

Demo::Demo(QObject *parent) : QObject(parent)
{

}

void Demo::doSomething()
{
    //qDebug() << "Doing smoething...";
    setValue(getValue() + 1.0);
    emit test();
}

void Demo::setValue(float v)
{
   if ( v == value )
       return;

   value = v;
   emit valueChanged();
}

float Demo::getValue() const
{
    return value;
}

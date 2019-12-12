#include "displacement.h"

displacement::displacement(QObject *parent) : QObject(parent)
{

}

void displacement::set(double v)
{
    value = v;
    emit changed(value);
}

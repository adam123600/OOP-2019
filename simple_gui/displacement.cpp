#include "displacement.h"

Displacement::Displacement(QObject *parent) : QObject(parent)
{

}

void Displacement::set(double v)
{
    value = v;
    emit changed(value); // emit- wysyla na zewnatrz z klasy sygnal ze ta wartosc sie zmienila
    // zmienilo sie na value;
}



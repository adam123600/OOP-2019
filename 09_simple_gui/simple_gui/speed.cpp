#include "speed.h"
#include <QDebug>

speed::speed(QObject *parent) : QObject(parent)
{
    predkosc1 = 0;
    predkosc2 = 0;
    flagPredkosc1 = 0;
    flagPredkosc2 = 0;
}

void speed::onDisplacementChanged(double v)
{
    if (flagPredkosc1 == 0)
    {
        predkosc1 = v;
        flagPredkosc1 = 1;
    }

    else if ( flagPredkosc2 == 0)
    {
        predkosc2 = v;
        flagPredkosc2 = 1;
    }

    else
    {
        predkosc1 = predkosc2;
        predkosc2 = v;
        double temp = predkosc2 - predkosc1;
        qDebug() << "[Speed] : " << temp;
        emit changed(temp);
    }
}

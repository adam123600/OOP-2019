#include "acceleration.h"
#include <QDebug>

acceleration::acceleration(QObject *parent) : QObject(parent)
{
    przy1 = 0;
    przy2 = 0;
    flag1 = 0;
    flag2 = 0;
}

void acceleration::onSpeedChanged(double v)
{
    if (flag1 == 0)
    {
        przy1 = v;
        flag1 = 1;
    }

    else if ( flag2 == 0)
    {
        przy2 = v;
        flag2 = 1;
    }

    else
    {
        przy1 = przy2;
        przy2 = v;
        double temp = przy2 - przy1;

        if ( temp == v)
            temp = 0;
        qDebug() << "[ACCCCC] : " << -temp;
        emit changed(-temp);
    }
}

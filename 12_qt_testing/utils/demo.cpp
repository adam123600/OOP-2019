#include "demo.h"


Demo::Demo() : QObject (nullptr)
{

}

int Demo::add(int a, int b)
{
    emit added();
    return a+b;

}

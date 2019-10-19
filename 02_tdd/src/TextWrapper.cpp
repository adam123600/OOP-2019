#include "TextWrapper.h"
#include <iostream>
/*
std::string TextWrapper::columns(std::string inputString, int nSize)
{
    return "Test metody";
}

 */

int TextWrapper::columns(int nSize) const {
    if ( nSize < 1 )
    {
        std::cout << "Nieprawidlowa liczba!" << std::endl;
        exit(0);
    }
    else
        return nSize;
}
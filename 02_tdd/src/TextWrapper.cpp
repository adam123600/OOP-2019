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

std::__cxx11::string TextWrapper::wrapper(const char * buffer, int nSize)
{
    //return "ab";

    char* pStart = (char*)buffer;

    while( *pStart != '\0')
    {
        if ( nSize == 1)
        {
            std::cout << *pStart << std::endl;
        }
        pStart++;
    }
    std::cout << std::endl;
}
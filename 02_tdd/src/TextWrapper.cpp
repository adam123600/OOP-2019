#include "TextWrapper.h"
#include <iostream>
//#include <stdio.h>
#include <string.h>
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

    int lenghtBuffer = strlen(buffer);

    while( *pStart != '\0')
    {
        if ( nSize < 1)
        {
            std::cout << "Podano nieodpowiednia liczbe!" << std::endl;
            exit(0);
        }

        if ( nSize == 1)
        {
            std::cout << *pStart << std::endl;
        }

        else if ( nSize == 2)
        {
            int halfL = (lenghtBuffer / 2) + 1;
            while ( halfL )
            {
                std::cout << *pStart;
                pStart++;
                halfL--;
            }

            std::cout << std::endl;

            while( *pStart != '\0' )
            {
                std::cout << *pStart;
                pStart++;
                exit(1);
            }
        }

        pStart++;
    }
    std::cout << std::endl;
}
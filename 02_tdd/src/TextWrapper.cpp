#include "TextWrapper.h"
#include <iostream>
//#include <stdio.h>
#include <cstring>
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

    const char* pStart = buffer;
    int strLength = std::strlen(buffer);
    char* strOutput = (char*)calloc(strLength + 1, sizeof(char));
    int position = 0;
    int lastSpace = 0;

    while(pStart[position] != '\0')
    {
        int isEOL = (pStart[position] == '\n');
        if (isEOL || position == nSize ) {
            if (isEOL || lastSpace == 0)
                lastSpace = position;


            while (*pStart != 0 && lastSpace-- > 0) {
                std::cout << *pStart++ << std::endl;
            }
            std::cout << std::endl;

            if (isEOL)
                pStart++;

            while (*pStart != 0 && *pStart == ' ')
                pStart++;

            lastSpace = position = 0;
        }
        else
        {
            if ( pStart[position] == ' ')
                lastSpace = position;
            position++;
        }
    }

    std::cout << pStart << std::endl;

}
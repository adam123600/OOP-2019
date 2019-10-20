#include <iostream>
#include <stdio.h>
#include "Dummy.h"
#include "TextWrapper.h"

int main(int argc, char* argv[])
{

    auto dummy = Dummy{};
    auto TextWrapperMain = TextWrapper{};

    int liczba;

    char* pBuffer = (char*)calloc(101, sizeof(char));

    //std::cout << TextWrapperMain.columns( 50);
    std::cout << "Podaj liczbe: " << std::endl;
    std::cin >> liczba;
    std::cout << "Twoja liczba " << TextWrapperMain.columns(liczba) << std::endl;
   // std::cout << dummy.hello() << std::endl;
    //std::cout << TextWrapperMain.wrapper("ab", 5);
    std::cout << "Podaj tekst: " << std::endl;
    std::cin >> pBuffer;
    std::cout << "Twoj tekst po podziale: " << std::endl;
    std::cout << TextWrapperMain.wrapper(pBuffer, liczba) << std::endl;
    //std::cout << TextWrapperMain.wrapper("ABCDEFGH", 5) << std::endl;


    free(pBuffer);
    return 0;
}

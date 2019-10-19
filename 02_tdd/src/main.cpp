#include <iostream>
#include "Dummy.h"
#include "TextWrapper.h"


int main(int argc, char* argv[])
{
    auto dummy = Dummy{};
    auto TextWrapperMain = TextWrapper{};

    int liczba;

  //  std::cout << TextWrapperMain.columns("ASD", 50);
    std::cout << "Podaj liczbe: " << std::endl;
    std::cin >> liczba;
    std::cout << "Twoja liczba " << TextWrapperMain.columns(liczba) << std::endl;
    std::cout << dummy.hello() << std::endl;
    std::cout << TextWrapperMain.wrapper("ab", 5);
    return 0;
}

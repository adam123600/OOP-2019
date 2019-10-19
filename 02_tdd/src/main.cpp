#include <iostream>
#include "Dummy.h"
#include "TextWrapper.h"


int main(int argc, char* argv[])
{
    auto dummy = Dummy{};
    auto TextWrapperMain = TextWrapper{};

    std::cout << TextWrapperMain.columns("ASD", 50);
    std::cout << dummy.hello() << std::endl;
    return 0;
}

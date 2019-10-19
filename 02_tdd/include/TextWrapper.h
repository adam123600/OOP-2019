#pragma once

#include <string>


class TextWrapper {
    int nSize;
    std::string inputString;

public:

    std::string columns(std::string inputString, int nSize) const;
};

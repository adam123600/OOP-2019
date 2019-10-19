#pragma once

#include <string>


class TextWrapper {
    int nSize;
    std::string inputString;

public:

    int columns(std::string inputString, int nSize) const;
};

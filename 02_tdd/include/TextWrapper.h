#pragma once

#include <string>


class TextWrapper {
    //int nSize;
    //std::string inputString;

public:

    //static std::string columns(std::string inputString, int nSize);
    int columns(int nSize) const;
    static std::__cxx11::string wrapper(const char *, int nSize);
};

#pragma once

//#include <map>
#include "ObserverInterface.h"

class ObserverImpl : public ObserverInterface{
public:

    void remember(std::string question, std::string answer) override;
    std::string answer(std::string question) const override;

private:
    std::map<std::string, std::string> answers;
};

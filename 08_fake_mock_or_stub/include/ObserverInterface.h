//
// Created by student on 02.12.2019.
//

#pragma once

//#ifndef INC_08_FAKE_MOCK_OR_STUB_OBSERVERINTERFACE_H
//#define INC_08_FAKE_MOCK_OR_STUB_OBSERVERINTERFACE_H

//#endif //INC_08_FAKE_MOCK_OR_STUB_OBSERVERINTERFACE_H

//#include "UniverseImpl.h"
#include <map>
class ObserverInterface
{
public:
    virtual void remember(std::string question, std::string answer) = 0;
    virtual std::string answer(std::string question) const = 0;

};
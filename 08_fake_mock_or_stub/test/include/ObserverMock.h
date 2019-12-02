//
// Created by student on 02.12.2019.
//

#pragma once

//#ifndef INC_08_FAKE_MOCK_OR_STUB_OBSERVERMOCK_H
//#define INC_08_FAKE_MOCK_OR_STUB_OBSERVERMOCK_H

//#endif //INC_08_FAKE_MOCK_OR_STUB_OBSERVERMOCK_H

#include "../../include/ObserverInterface.h"
#include "TestIncludes.h"

class ObserverMock : public ObserverInterface
{
public:
    MOCK_METHOD2(remember, void(std::string question, std::string answer));
    MOCK_CONST_METHOD1(answer, std::string(std::string question));
};
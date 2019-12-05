//
// Created by student on 05.12.2019.
//

#pragma once
#include "../../include/Observer.h"
#include "TestIncludes.h"

/*
#ifndef INC_08_FAKE_MOCK_OR_STUB_OBSERVERMOCK_H
#define INC_08_FAKE_MOCK_OR_STUB_OBSERVERMOCK_H

#endif //INC_08_FAKE_MOCK_OR_STUB_OBSERVERMOCK_H
*/

class ObserverMock : public Observer
{
public:
    MOCK_METHOD2(remember, void(std::string question, std::string answer));
    MOCK_CONST_METHOD1(answer, std::string(std::string question));
};

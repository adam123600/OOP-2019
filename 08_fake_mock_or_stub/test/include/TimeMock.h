//
// Created by student on 05.12.2019.
//

#pragma once
#include "../../include/Time.h"
#include "TestIncludes.h"

/*
#ifndef INC_08_FAKE_MOCK_OR_STUB_TIMEMOCK_H
#define INC_08_FAKE_MOCK_OR_STUB_TIMEMOCK_H

#endif //INC_08_FAKE_MOCK_OR_STUB_TIMEMOCK_H
*/

class TimeMock : public Time
{
public:
    MOCK_METHOD1(create, void(bool endless));
    MOCK_CONST_METHOD0(now, long long());
    MOCK_METHOD0(flow, void());
};
//
// Created by student on 02.12.2019.
//

#pragma once

//#ifndef INC_08_FAKE_MOCK_OR_STUB_TIMEMOCK_H
//#define INC_08_FAKE_MOCK_OR_STUB_TIMEMOCK_H

//#endif //INC_08_FAKE_MOCK_OR_STUB_TIMEMOCK_H

#include "../../include/TimeInterface.h"
#include "TestIncludes.h"

class TimeMock : public TimeInterface
{
public:
    MOCK_METHOD1(create, void(bool endless));
    MOCK_CONST_METHOD0(now, long long());
    MOCK_METHOD0(flow, void());
};

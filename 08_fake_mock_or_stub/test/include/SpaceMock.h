//
// Created by student on 02.12.2019.
//

#pragma once

//#ifndef INC_08_FAKE_MOCK_OR_STUB_SPACEMOCK_H
//#define INC_08_FAKE_MOCK_OR_STUB_SPACEMOCK_H

//#endif //INC_08_FAKE_MOCK_OR_STUB_SPACEMOCK_H

#include "../../include/SpaceInterface.h"
#include "TestIncludes.h"

class SpaceMock : public SpaceInterface
{
public:
    MOCK_METHOD1(create, void(unsigned int dimensions));
    MOCK_CONST_METHOD0(dimensions, unsigned int());
};
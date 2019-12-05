//
// Created by student on 05.12.2019.
//

#pragma once
#include "../../include/Space.h"
#include "TestIncludes.h"

/*
#ifndef INC_08_FAKE_MOCK_OR_STUB_SPACEMOCK_H
#define INC_08_FAKE_MOCK_OR_STUB_SPACEMOCK_H

#endif //INC_08_FAKE_MOCK_OR_STUB_SPACEMOCK_H
*/

class SpaceMock : public Space
{
public:
    MOCK_METHOD1(create, void(unsigned int dimensions));
    MOCK_CONST_METHOD0(dimensions, unsigned int());
};
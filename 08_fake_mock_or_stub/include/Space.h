//
// Created by student on 05.12.2019.
//

#pragma once

/*
#ifndef INC_08_FAKE_MOCK_OR_STUB_SPACE_H
#define INC_08_FAKE_MOCK_OR_STUB_SPACE_H

#endif //INC_08_FAKE_MOCK_OR_STUB_SPACE_H
*/

class Space
{
public:
    virtual void create(unsigned int dimensions) = 0;
    virtual unsigned int dimensions() const = 0;
};
//
// Created by student on 05.12.2019.
//

#pragma once
/*
#ifndef INC_08_FAKE_MOCK_OR_STUB_OBSERVER_H
#define INC_08_FAKE_MOCK_OR_STUB_OBSERVER_H

#endif //INC_08_FAKE_MOCK_OR_STUB_OBSERVER_H
*/

#include <map>

class Observer
{
public:
    virtual void remember(std::string question, std::string answer) = 0;
    virtual std::string answer(std::string question) const = 0;
};
//
// Created by student on 02.12.2019.
//

#pragma once

//#ifndef INC_08_FAKE_MOCK_OR_STUB_TIMEINTERFACE_H
//#define INC_08_FAKE_MOCK_OR_STUB_TIMEINTERFACE_H

//#endif //INC_08_FAKE_MOCK_OR_STUB_TIMEINTERFACE_H

class TimeInterface
{
public:

    virtual void create(bool endless) = 0;
    virtual long long now() const = 0;
    virtual void flow() = 0;
};
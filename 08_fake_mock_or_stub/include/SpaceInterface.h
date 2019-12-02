//
// Created by student on 02.12.2019.
//

#pragma once

//#ifndef INC_08_FAKE_MOCK_OR_STUB_SPACEINTERFACE_H
//#define INC_08_FAKE_MOCK_OR_STUB_SPACEINTERFACE_H

//#endif //INC_08_FAKE_MOCK_OR_STUB_SPACEINTERFACE_H

class SpaceInterface {
public:
    virtual void create(unsigned int dimension) = 0;
    virtual unsigned int dimensions() const = 0;
};
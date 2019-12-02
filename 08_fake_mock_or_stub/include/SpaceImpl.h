#pragma once

#include "Point.h"
#include "SpaceInterface.h"

#include <vector>

class SpaceImpl : public SpaceInterface{
public:

    void create(unsigned int dimensions) override;
    unsigned int dimensions() const override;

private:
    unsigned int dimensionsCount;
    std::vector<Point> points;
};
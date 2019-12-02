#pragma once

#include "TimeImpl.h"
#include "SpaceImpl.h"
#include "ObserverImpl.h"

class UniverseImpl {
public:

    UniverseImpl(TimeInterface &time, SpaceInterface &space, ObserverInterface &observer);

    void create();
    void simulate(long years);


private:
    TimeInterface &time;
    SpaceImpl &space;
    ObserverInterface &observer;
};

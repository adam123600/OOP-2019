#pragma once

#include "TimeInterface.h"

class TimeImpl : public TimeInterface {
public:

    void create(bool endless) override;
    long long now() const override;

    void flow() override;

private:
    long long year;
    bool endless;
};
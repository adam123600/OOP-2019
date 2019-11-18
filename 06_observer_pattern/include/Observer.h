//
// Created by student on 18.11.2019.
//

#ifndef INC_06_OBSERVER_PATTERN_OBSERVER_H
#define INC_06_OBSERVER_PATTERN_OBSERVER_H

#endif //INC_06_OBSERVER_PATTERN_OBSERVER_H

class Observer
{
public:
    virtual void notifly(float) = 0;
    virtual ~Observer() = delete;
};
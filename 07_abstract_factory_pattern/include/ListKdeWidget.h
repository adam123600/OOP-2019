//
// Created by student on 25.11.2019.
//

#ifndef INC_07_ABSTRACT_FACTORY_PATTERN_LISTKDEWIDGET_H
#define INC_07_ABSTRACT_FACTORY_PATTERN_LISTKDEWIDGET_H

#endif //INC_07_ABSTRACT_FACTORY_PATTERN_LISTKDEWIDGET_H
#include <iostream>
#include "Widget.h"

class ListKdeWidget : public Widget
{
    int kdeVersion;

public:
    ListKdeWidget(int kdeVersionC);
    void draw();
};
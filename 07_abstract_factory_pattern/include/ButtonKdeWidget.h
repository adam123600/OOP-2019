//
// Created by student on 25.11.2019.
//

#ifndef INC_07_ABSTRACT_FACTORY_PATTERN_BUTTONKDEWIDGET_H
#define INC_07_ABSTRACT_FACTORY_PATTERN_BUTTONKDEWIDGET_H

#endif //INC_07_ABSTRACT_FACTORY_PATTERN_BUTTONKDEWIDGET_H

#include <iostream>
#include "Widget.h"

class ButtonKdeWidget : public Widget
{
    int kdeVersion;

public:
    ButtonKdeWidget(int kdeVersionC);
    void draw();
};
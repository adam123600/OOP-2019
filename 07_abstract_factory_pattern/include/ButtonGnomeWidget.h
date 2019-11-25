//
// Created by student on 25.11.2019.
//

#ifndef INC_07_ABSTRACT_FACTORY_PATTERN_BUTTONGNOMEWIDGET_H
#define INC_07_ABSTRACT_FACTORY_PATTERN_BUTTONGNOMEWIDGET_H

#endif //INC_07_ABSTRACT_FACTORY_PATTERN_BUTTONGNOMEWIDGET_H

#include <iostream>
#include "Widget.h"

class ButtonGnomeWidget : public Widget
{
    int gnomeVersion;

public:
    explicit ButtonGnomeWidget(int gnomeVersionC);
    void draw();
};
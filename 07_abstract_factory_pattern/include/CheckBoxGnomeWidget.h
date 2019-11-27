//
// Created by student on 25.11.2019.
//

#ifndef INC_07_ABSTRACT_FACTORY_PATTERN_CHECKBOXGNOMEWIDGET_H
#define INC_07_ABSTRACT_FACTORY_PATTERN_CHECKBOXGNOMEWIDGET_H

#endif //INC_07_ABSTRACT_FACTORY_PATTERN_CHECKBOXGNOMEWIDGET_H

#include <iostream>
#include "Widget.h"

class CheckBoxGnomeWidget : public Widget
{
    int gnomeVersion;

public:
    explicit CheckBoxGnomeWidget(int gnomeVersionC);
    void draw();
};
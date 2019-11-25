//
// Created by student on 25.11.2019.
//
#pragma once
//#ifndef INC_07_ABSTRACT_FACTORY_PATTERN_CHECKBOXKDEWIDGET_H
//#define INC_07_ABSTRACT_FACTORY_PATTERN_CHECKBOXKDEWIDGET_H

#include "Widget.h"
#include <iostream>
//namespace Gui;

class CheckBoxKdeWidget : public Widget
{
public:
    int kdeVersion;

    public:
        explicit CheckBoxKdeWidget(int kdeVersionC);
        void draw();
};


//#endif //INC_07_ABSTRACT_FACTORY_PATTERN_CHECKBOXKDEWIDGET_H

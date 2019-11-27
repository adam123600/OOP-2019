//
// Created by student on 25.11.2019.
//

#ifndef INC_07_ABSTRACT_FACTORY_PATTERN_KDEWIDGETFACTORY_H
#define INC_07_ABSTRACT_FACTORY_PATTERN_KDEWIDGETFACTORY_H

#endif //INC_07_ABSTRACT_FACTORY_PATTERN_KDEWIDGETFACTORY_H

#include "WidgetFactory.h"
#include "CheckBoxKdeWidget.h"
#include "ListKdeWidget.h"
#include "ButtonKdeWidget.h"

class KdeWidgetFactory : public WidgetFactory
{
    int kdeVersion;

public:
    KdeWidgetFactory(int kdeVersionC);
    std::shared_ptr<Widget> create(std::string type);
};
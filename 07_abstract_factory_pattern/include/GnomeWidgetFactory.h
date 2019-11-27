//
// Created by student on 25.11.2019.
//

#ifndef INC_07_ABSTRACT_FACTORY_PATTERN_GNOMEWIDGETFACTORY_H
#define INC_07_ABSTRACT_FACTORY_PATTERN_GNOMEWIDGETFACTORY_H

#endif //INC_07_ABSTRACT_FACTORY_PATTERN_GNOMEWIDGETFACTORY_H

#include "CheckBoxGnomeWidget.h"
#include "ListGnomeWidget.h"
#include "ButtonGnomeWidget.h"
#include <memory>

class GnomeWidgetFactory
{
    int gnomeVersion;

public:
    explicit GnomeWidgetFactory(int gnomeVersionC);
    std::shared_ptr<Widget> create(std::string type);
};
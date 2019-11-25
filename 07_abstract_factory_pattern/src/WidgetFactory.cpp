//
// Created by student on 25.11.2019.
//

#include "../include/WidgetFactory.h"

std::shared_ptr<Widget> WidgetFactory::create(std::string type)
{
    if ( type == "")
    std::shared_ptr<Widget> widget = std::make_shared<Widget>();
}
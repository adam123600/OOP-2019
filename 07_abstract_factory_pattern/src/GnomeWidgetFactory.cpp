//
// Created by student on 25.11.2019.
//

#include "../include/GnomeWidgetFactory.h"

GnomeWidgetFactory::GnomeWidgetFactory(int gnomeVersionC)
{
    this->gnomeVersion = gnomeVersionC;
}
std::shared_ptr<Widget> GnomeWidgetFactory::create(std::string type)
{
    if ( type == "CheckBoxGnomeWidget" )
        return std::make_shared<CheckBoxGnomeWidget>(this->gnomeVersion);

    else if ( type == "ListGnomeWidget" )
        return std::make_shared<ListGnomeWidget>(this->gnomeVersion);

    else if ( type == "ButtonGnomeWidget")
        return std::make_shared<ButtonGnomeWidget>(this->gnomeVersion);

    else
        std::cout << "ASDSADASD" << std::endl;
}
//
// Created by student on 25.11.2019.
//

#include "../include/KdeWidgetFactory.h"

KdeWidgetFactory::KdeWidgetFactory(int kdeVersionC)
{
  this->kdeVersion = kdeVersionC;
};
std::shared_ptr<Widget> KdeWidgetFactory::create(std::string type)
{
    if ( type == "CheckBoxKdeWidget" )
        return std::make_shared<CheckBoxKdeWidget>(this->kdeVersion);

    else if ( type == "ListKdeWidget" )
        return std::make_shared<ListKdeWidget>(this->kdeVersion);

    else if ( type == "ButtonKdeWidget")
        return std::make_shared<ButtonKdeWidget>(this->kdeVersion);

    else
        std::cout << "ASDSADASD" << std::endl;
}
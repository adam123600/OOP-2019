//
// Created by student on 25.11.2019.
//

#include "../include/ButtonKdeWidget.h"

ButtonKdeWidget::ButtonKdeWidget(int kdeVersionC)
{
    this->kdeVersion = kdeVersionC;
}
void ButtonKdeWidget::draw()
{
    std::cout << "ButtonKdeWidget" << std::endl;
}
#include <iostream>
#include "Dummy.h"
#include "Demo.h"
#include "KdeWidgetFactory.h"

int main() {

    auto dummy = Dummy{};

    std::cout << "dummy.integrate(2, 4) = " << dummy.integrate(2, 4) << std::endl;

    //std::shared_ptr<WidgetFactory> widget;
    Demo demo{std::make_shared<KdeWidgetFactory>(5)};

    demo.run("ListKdeWidget");

    return 0;
}
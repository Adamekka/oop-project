#include "ui/button.hpp"
#include "ui/container.hpp"
#include "ui/dom.hpp"
#include "ui/label.hpp"
#include "ui/toggle.hpp"
#include <iostream>

auto main() -> int32_t {
    ui::Dom dom;

    {
        auto label = std::make_shared<ui::Label>("This is first container");
        auto button = std::make_shared<ui::Button>("Click Me", []() {
            std::cout << "Button clicked!\n";
        });

        auto container = std::make_shared<ui::Container>();
        container->add_element(label);
        container->add_element(button);

        dom.add_element(container);
    }

    {
        auto label = std::make_shared<ui::Label>("This is second container");
        auto toggle = std::make_shared<ui::Toggle>(false);

        toggle->toggle();

        auto container = std::make_shared<ui::Container>();
        container->add_element(label);
        container->add_element(toggle);

        dom.add_element(container);
    }

    dom.render();
}

#include "ui/button.hpp"
#include "ui/container.hpp"
#include "ui/dom.hpp"
#include "ui/label.hpp"
#include <iostream>

auto main() -> int32_t {
    ui::Dom dom;

    auto container = std::make_shared<ui::Container>();

    auto label1 = std::make_shared<ui::Label>("Hello, World!");
    auto button1 = std::make_shared<ui::Button>("Click Me", []() {
        std::cout << "Button clicked!\n";
    });

    container->add_element(label1);
    container->add_element(button1);

    dom.add_element(container);

    dom.render();
}

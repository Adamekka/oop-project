#include "ui/container.hpp"
#include "ui/dom.hpp"
#include "ui/label.hpp"
#include <cstdint>

auto main() -> int32_t {
    ui::Dom dom;

    auto container = std::make_shared<ui::Container>();

    auto label1 = std::make_shared<ui::Label>("Hello, World!");

    container->add_element(label1);

    dom.add_element(container);

    dom.render();
}

#include "ui/container.hpp"
#include "ui/dom.hpp"
#include <cstdint>

auto main() -> int32_t {
    ui::Dom dom;

    auto container = std::make_shared<ui::Container>();

    dom.add_element(container);

    dom.render();
}

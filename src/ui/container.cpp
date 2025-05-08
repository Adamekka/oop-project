#include "container.hpp"
#include <iostream>

auto ui::Container::render() const -> void {
    std::cout << "Container:\n";

    for (const auto& element : this->elements)
        element->render();
}

#include "container.hpp"

auto ui::Container::render() const -> void {
    for (const auto& element : this->elements)
        element->render();
}

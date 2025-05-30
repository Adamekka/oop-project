#include "dom.hpp"
#include <iostream>

auto ui::Dom::add_element(std::shared_ptr<Element> element) -> void {
    this->elements.push_back(std::move(element));
}

auto ui::Dom::render() const -> void {
    std::cout << "DOM:\n";

    for (const auto& element : this->elements)
        element->render();
}

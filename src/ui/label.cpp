#include "label.hpp"
#include <iostream>

ui::Label::Label(std::string text) : text(std::move(text)) {}

auto ui::Label::render() const -> void {
    std::cout << "Label: " << this->text << '\n';
}

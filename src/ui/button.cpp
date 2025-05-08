#include "button.hpp"
#include <iostream>

ui::Button::Button(std::string text, std::function<void()> on_click)
    : label(std::move(text)), on_click(std::move(on_click)) {}

auto ui::Button::click() -> void { this->on_click(); }

auto ui::Button::render() const -> void {
    std::cout << "Button: ";
    this->label.render();
}

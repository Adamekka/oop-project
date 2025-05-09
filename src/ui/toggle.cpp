#include "toggle.hpp"
#include <iostream>

ui::Toggle::Toggle(bool initial_state) : state(initial_state) {}

auto ui::Toggle::set_state(bool new_state) -> void { this->state = new_state; }

[[nodiscard]] auto ui::Toggle::get_state() const -> bool { return this->state; }

auto ui::Toggle::toggle() -> void { this->state = !this->state; }

auto ui::Toggle::render() const -> void {
    std::cout << "Toggle: " << (this->state ? "ON" : "OFF") << '\n';
}

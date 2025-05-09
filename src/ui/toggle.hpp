#ifndef UI_TOGGLE_HPP
#define UI_TOGGLE_HPP

#include "element.hpp"

namespace ui {

/// Toggle class for creating a toggle button
class Toggle : public Element {
  private:
    bool state = false;

  public:
    explicit Toggle() = default;
    explicit Toggle(bool initial_state);
    ~Toggle() final = default;

    auto set_state(bool new_state) -> void;
    [[nodiscard]] auto get_state() const -> bool;
    auto toggle() -> void;

    auto render() const -> void final;
};

} // namespace ui

#endif

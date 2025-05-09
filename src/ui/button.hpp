#ifndef UI_BUTTON_HPP
#define UI_BUTTON_HPP

#include "label.hpp"
#include <functional>

namespace ui {

/// Button class for creating a clickable button
class Button : public Element {
  private:
    Label label;
    std::function<void()> on_click;

  public:
    Button(std::string text, std::function<void()> on_click);
    ~Button() final = default;

    auto click() -> void;

    auto render() const -> void final;
};

} // namespace ui

#endif

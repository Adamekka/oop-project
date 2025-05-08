#ifndef UI_LABEL_HPP
#define UI_LABEL_HPP

#include "element.hpp"
#include <string>

namespace ui {

class Label : public ui::Element {
  private:
    std::string text;

  public:
    explicit Label(std::string text);
    ~Label() final = default;

    auto render() const -> void final;
};

} // namespace ui

#endif

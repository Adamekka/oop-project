#ifndef UI_DOM_HPP
#define UI_DOM_HPP

#include "element.hpp"
#include <memory>
#include <vector>

namespace ui {

class Dom {
  private:
    std::vector<std::shared_ptr<Element>> elements;

  public:
    Dom() = default;
    ~Dom() = default;

    auto add_element(std::shared_ptr<Element> element) -> void;

    auto render() const -> void;
};

} // namespace ui

#endif

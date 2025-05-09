#ifndef UI_CONTAINER_HPP
#define UI_CONTAINER_HPP

#include "element.hpp"
#include <vector>

namespace ui {

/// Container class for grouping multiple UI elements
class Container : public Element {
  protected:
    std::vector<std::shared_ptr<Element>> elements;

  public:
    Container() = default;
    ~Container() override = default;

    auto add_element(std::shared_ptr<Element> element) -> void {
        this->elements.push_back(std::move(element));
    }

    auto render() const -> void override;
};

} // namespace ui

#endif

#ifndef UI_ELEMENT_HPP
#define UI_ELEMENT_HPP

#include <cstddef>

namespace ui {

class Element {
  protected:
    size_t id;

    Element();

  public:
    virtual ~Element() = default;

    virtual auto render() const -> void = 0;
};

} // namespace ui

#endif

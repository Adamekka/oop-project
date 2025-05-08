#include "element.hpp"

ui::Element::Element() {
    static size_t next_id = 0;
    this->id = next_id;
    next_id++;
}

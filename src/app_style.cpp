#include "app_style.hpp"

auto AppStyle::set_font_size(uint8_t s) -> void { AppStyle::font_size = s; }

auto AppStyle::set_margin(size_t m) -> void { AppStyle::margin = m; }

auto AppStyle::set_padding(size_t p) -> void { AppStyle::padding = p; }

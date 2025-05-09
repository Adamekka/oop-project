#ifndef UI_STYLE_HPP
#define UI_STYLE_HPP

#include <cstddef>
#include <cstdint>

/// Styling class for the application
class AppStyle {
  private:
    static inline uint8_t font_size = 12;
    static inline size_t margin = 10;
    static inline size_t padding = 5;

  public:
    AppStyle() = delete;
    ~AppStyle() = delete;

    static auto set_font_size(uint8_t size) -> void;
    static auto set_margin(size_t margin) -> void;
    static auto set_padding(size_t padding) -> void;
};

#endif

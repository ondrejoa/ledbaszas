#include <ws2812b.hpp>
using namespace ws2812b;

extern "C" void app_main() {
    auto gpio = 33;
    auto led_count = 10;
    LedStrip::Ptr led_strip = LedStrip::create(gpio, led_count);
}
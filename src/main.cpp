#include <stdio.h>
#include "pico/stdlib.h"

#include "pico_rgb_keypad.hpp"

using namespace pimoroni;

PicoRGBKeypad pico_keypad;

int main()
{
    pico_keypad.init();
    pico_keypad.set_brightness(1.0f);

    setup_default_uart();
    stdio_init_all();

    puts("Starting application...");

    //pico_keypad.illuminate(1, 0xFF, 0x00, 0x00);
    //pico_keypad.illuminate(5, 0xFF, 0xFF, 0x00);
    //pico_keypad.illuminate(9, 0x00, 0x00, 0xFF);

    pico_keypad.update();

    while (true)
    {
        
    }
}
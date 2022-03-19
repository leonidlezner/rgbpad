#include <stdio.h>
#include "pico/stdlib.h"

#include "pico_rgb_keypad.hpp"

#include "Screen.h"

using namespace pimoroni;

PicoRGBKeypad pico_keypad;

void displayScreen(Screen &screen)
{
    uint16_t size = screen.getWidth() * screen.getHeight();

    for (uint8_t i = 0; i < size; i++)
    {
        Pixel pixel = screen.getPixel(i);
        pico_keypad.illuminate(i, pixel.getR(), pixel.getG(), pixel.getB());
    }

    pico_keypad.update();
}

int main()
{
    
    pico_keypad.init();
    pico_keypad.set_brightness(1.0f);

    setup_default_uart();
    stdio_init_all();

    puts("Starting application...");


    Screen screen;

    screen.init(4, 4);

    screen.setPixel(0, 0, 255, 0, 0);
    screen.setPixel(3, 3, 0, 255, 0);

    displayScreen(screen);

    while (true)
    {
    }
}
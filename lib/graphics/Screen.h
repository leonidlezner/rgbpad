#pragma once

#include <stdio.h>
#include "Pixel.h"

class Screen
{
private:
    uint8_t width;
    uint8_t height;
    Pixel *buffer;

public:
    Screen();
    ~Screen();

    void init(uint8_t width, uint8_t height);
    uint8_t getWidth() { return width; }
    uint8_t getHeight() { return height; }

    void setPixel(uint8_t x, uint8_t y, uint8_t r, uint8_t g, uint8_t b);
    Pixel &getPixel(uint8_t index);
};
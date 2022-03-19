#pragma once

#include <stdio.h>

class Pixel
{
private:
    uint8_t r;
    uint8_t g;
    uint8_t b;
public:
    Pixel();
    ~Pixel();

    void setRGB(uint8_t r, uint8_t g, uint8_t b);
    uint8_t getR() { return r; }
    uint8_t getG() { return g; }
    uint8_t getB() { return b; }
};
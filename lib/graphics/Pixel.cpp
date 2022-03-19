#include "Pixel.h"

Pixel::Pixel()
{
    this->r = 0;
    this->g = 0;
    this->b = 0;
}

Pixel::~Pixel()
{
    
}

void Pixel::setRGB(uint8_t r, uint8_t g, uint8_t b)
{
    this->r = r;
    this->g = g;
    this->b = b;
}

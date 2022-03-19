#include "Screen.h"

Screen::Screen(/* args */)
{

}

Screen::~Screen()
{
    
}

void Screen::init(uint8_t width, uint8_t height)
{
    this->buffer = new Pixel[width * height];

    this->width = width;
    this->height = height;
}

void Screen::setPixel(uint8_t x, uint8_t y, uint8_t r, uint8_t g, uint8_t b)
{
    Pixel &pixel = this->buffer[y * this->getWidth() + x];
    pixel.setRGB(r, g, b);
}

Pixel &Screen::getPixel(uint8_t index)
{
    return this->buffer[index];
}
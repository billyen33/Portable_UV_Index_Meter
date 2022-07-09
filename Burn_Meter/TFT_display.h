#ifndef TFT_DISPLAY_H
#define TFT_DISPLAY_H
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>             // Arduino SPI library

void init_screen();
void display_texts(int index);
void display_battery(float percent);
void display_pic(int index);
uint16_t adjust_redness(uint16_t color, int index);

#endif

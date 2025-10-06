#ifndef RESISTOR_COLOR_DUO_H
#define RESISTOR_COLOR_DUO_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef enum {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

int color_code(resistor_band_t[]);
int band1(resistor_band_t colour);
int band2(resistor_band_t colour);
#endif

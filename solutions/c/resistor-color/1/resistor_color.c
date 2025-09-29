#include "resistor_color.h"

resistor_band_t colours[] = {
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
};
int color_code(resistor_band_t colour){
    return (int)colour;
}
resistor_band_t *colors(void){
    return colours;
}
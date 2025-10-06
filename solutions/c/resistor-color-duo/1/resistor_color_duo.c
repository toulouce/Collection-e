#include "resistor_color_duo.h"
#define STRFY(x) #x


typedef struct {
    int colourBand1;
    int colourBand2;
} colourBand_t;

int band1(resistor_band_t colour){
    return (int)colour;
}

int band2(resistor_band_t colour){
    return (int)colour;
}

int color_code(resistor_band_t colour[]){
    char bruh[3];
    snprintf(bruh, sizeof(bruh), "%d%d", band1(colour[0]), band2(colour[1]));
    return atoi(bruh);
}

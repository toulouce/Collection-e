#include "space_age.h"


float age(planet_t planet, int64_t seconds){
    switch(planet){
        case MERCURY:
            return (float)seconds / 31556952.0 / 0.2408467;
        case VENUS:
            return (float)seconds / 31556952.0 / 0.61519726;
        case EARTH:
            return (float)seconds / 31556952.0 / 1;
        case MARS:
            return (float)seconds / 31556952.0 / 1.8808158;
        case JUPITER:
            return (float)seconds / 31556952.0 / 11.862615;
        case SATURN:
            return (float)seconds / 31556952.0 / 29.447498;
        case URANUS:
            return (float)seconds / 31556952.0 / 84.016846;
        case NEPTUNE:
            return (float)seconds / 31556952.0 / 164.79132;
        default:
            return -1.0f;
    }
}

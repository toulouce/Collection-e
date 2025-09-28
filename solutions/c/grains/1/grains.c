#include "grains.h"

uint64_t square(uint8_t index)
{
    uint64_t returnval = (uint64_t)pow(2, ((double)index-1.0));
    return returnval;
}

uint64_t total(void)
{
    uint64_t total = (uint64_t)pow(2.0, 64.0);
    return total;
}
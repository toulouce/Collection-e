#include "difference_of_squares.h"

static unsigned int buf1;
static unsigned int buf2;

unsigned int square_of_sum(unsigned int number)
{   
    switch (number) {
        case 0: {
            unsigned int result = buf1 * buf1;
            //reset the buffer
            buf1 = 0;
            return result;
        }
        default:
            buf1 += number;
            //recursive
            return square_of_sum(number - 1);
    }
}

unsigned int sum_of_squares(unsigned int number)
{
    switch (number) {
        case 0: {
            unsigned int result = buf2;
            //resets the buffer
            buf2 = 0;
            return result;
        }
        default:
            buf2 += number * number;
            return sum_of_squares(number - 1);
    }
}

unsigned int difference_of_squares(unsigned int number)
{
    unsigned int squareOfSum = square_of_sum(number);
    unsigned int sumOfSquares = sum_of_squares(number);
    return squareOfSum - sumOfSquares;
}

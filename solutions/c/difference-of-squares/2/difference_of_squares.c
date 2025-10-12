#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int n){
    unsigned int c = (n * (n + 1) * ((2 * n) + 1)) / 6;
    return c;
}

unsigned int square_of_sum(unsigned int number){
    
    unsigned int Sum = number * (number + 1) / 2;
    return Sum * Sum;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}
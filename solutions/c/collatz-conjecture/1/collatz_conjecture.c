#include "collatz_conjecture.h"

int steps(int start){
    int count = 0;  //Count of Steps to reach 0
    if(start > 0){  // Check if the starting value is valid
    //Break out of the loop if the val is equal to 1
    while (start != 1){
        if(start % 2 == 0){ //Check if the value is even or odd
            start /= 2;
        } else {
            start = (start * 3) + 1;
        }
         count++;
    }
    } else if(start == 0) return -1; //Start value is 0
    else return -1; //Invalid Value Entered
    return count;
}
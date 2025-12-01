#include "eliuds_eggs.h"
#include <stdlib.h>
#include <string.h>

void decToBin(unsigned int n, char *binary) {
    int i = 0;

    if (n == 0) {
        binary[0] = '0';
        binary[1] = '\0';
        return;
    }

    while (n > 0) {
        int bit = n % 2;         
        binary[i++] = '0' + bit;    
        n /= 2;
    }

    binary[i] = '\0';           

    for (int j = 0; j < i / 2; j++) {
        char temp = binary[j];
        binary[j] = binary[i - j - 1];
        binary[i - j - 1] = temp;
    }
}


int egg_count(unsigned int eggCount){
    int egg_count = 0;
    char *bin = malloc(sizeof(char) * 1024);
    decToBin(eggCount, bin);
    for(int i = 0; bin[i] != '\0'; i++){
        if(bin[i] == '1'){
            egg_count++;
        }
        continue;
    }
    free(bin);
    return egg_count;
}
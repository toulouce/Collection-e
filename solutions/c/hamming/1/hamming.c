#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs){
    int hammingDistance = 0;
    if(strlen(lhs) == strlen(rhs)){
        int n = 0;
        while(lhs[n] != '\0'){
        if(lhs[n] == rhs[n]){
            n++;
            continue;
        } else {
            hammingDistance++;
            n++;
        }
      }
    } else {
        return -1;
    }
    return hammingDistance;
}
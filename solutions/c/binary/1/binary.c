#include "binary.h"
#include <stdlib.h>
#include <string.h>

char *reverseString(const char *s) {
    int n = strlen(s);
    char *res = malloc(n + 1);

    for (int i = 0; i < n; i++) {
        res[i] = s[n - 1 - i];
    }
    res[n] = '\0';
    return res;
}

int returneins(char c) {
    if (c == '0')
        return ZERO;
    if (c == '1')
        return ONE;
    return INVALID;
}

int convert(const char *input) {
    char *buf = reverseString(input);
    int result = 0;

    for (int i = 0; buf[i] != '\0'; i++) {
        if (buf[i] != '0' && buf[i] != '1') {
            free(buf);
            return INVALID;
        }

        int bit = returneins(buf[i]);
        if (bit == INVALID) {
            free(buf);
            return INVALID;
        }

        result += bit << i; 
    }

    free(buf);
    return result;
}

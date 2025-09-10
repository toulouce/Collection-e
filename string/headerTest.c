#include "my_string.h"
#include <stdio.h>

int main(void) {
    char src[50] = "Hello\n";
    char dest[50];
    my_strcpy(dest, src);
    printf("Copied string: %s", dest);
    int a = 3, b = 9;
    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);
    printf("Length of src: %zu\n", my_strlen(src));
    return 0;
}   
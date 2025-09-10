#include <stdio.h>
#include <stddef.h>
//Reimplementation of some string.h functions
//maybe not the best idea to test but whatever

size_t my_strlen(const char *str) {
    size_t length = 0;
    while(str[length] != '\0')
      length++;
    return length;
}
char *my_strcpy(char *dest_str, const char *src){
    char *ptr = dest_str;
    while(*src != '\0'){
        *dest_str++ = *src++;
    }
    *dest_str = '\0';
    return ptr;
}
void swap(int *a, int *b){
    int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main(void){
    char str[] = "hello";
    char dest[6];
    printf("%zu", my_strlen(str));
    my_strcpy(dest, str);
    printf("\n%s", dest);
    int x = 4, y = 5;
    swap(&x, &y);
    printf("\n%d %d", x, y);
}
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
void *my_strcpy(char *dest_str, const char *src){
    char *ptr = dest_str;
    while(*src != '\0'){
        *dest_str++ = *src++;
    }
}
void swap(int *a, int *b){
    int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main(void){
    
}
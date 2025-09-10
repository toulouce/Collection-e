#ifndef MY_STRING_H
#define MY_STRING_H
#include <stddef.h>
static inline size_t my_strlen(const char *str) {
    size_t length = 0;
    while(str[length] != '\0')
      length++;
    return length;
}
static inline void *my_strcpy(char *dest_str, const char *src){
    char *ptr = dest_str;
    while(*src != '\0'){
        *dest_str++ = *src++;
    }
    *dest_str = '\0';
    return ptr;
}
static inline void swap(int *a, int *b){
    int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}



#endif // MY_STRING_H
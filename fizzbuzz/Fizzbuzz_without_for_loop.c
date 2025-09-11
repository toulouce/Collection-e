//FIZZBUZZ without for loop and else/if statement
#include <stdio.h>

int i = 1;
void fizzbuzz(int n){
    switch(i){
    case 0:
        return;
    default:
      i % 15 == 0 ? printf("FizzBuzz\n") : i % 3 == 0 ? printf("Fizz\n") : i % 5 == 0 ? printf("Buzz\n"): printf("%d\n", i);
      i++;
      fizzbuzz(n-1);
    }
}

int main(void){
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    fizzbuzz(n);
    return 0;
}
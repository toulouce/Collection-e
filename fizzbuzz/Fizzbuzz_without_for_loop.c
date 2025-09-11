//FIZZBUZZ without for loop and else/if statement
#include <stdio.h>

int i = 1;
int n = 0;

void fizzbuzz(int n){
    switch(n){
    case 0:
        return;
    default:
      i % 15 == 0 ? printf("FizzBuzz\n") : i % 3 == 0 ? printf("Fizz\n") : i % 5 == 0 ? printf("Buzz\n"): printf("%d\n", i);
      i++;
      n--;
      fizzbuzz(n);
    }
}

int main(void){
    printf("Enter a number: ");
    scanf("%d", &n);
    fizzbuzz(n);
    return 0;
}
//FIZZBUZZ without for loop and else/if statement
#include <stdio.h>
#include <stdlib.h>

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
      fizzbuzz(n); i % 15 == 0 ? printf("FizzBuzz\n") : i % 3 == 0 ? printf("Fizz\n") : i % 5 == 0 ? printf("Buzz\n"): printf("%d\n", i);
    }
}
void Fizzbuzz(int n){
    n <= 0 ? exit(0) : i % 15 == 0 ? printf("FizzBuzz\n") : i % 3 == 0 ? printf("Fizz\n") : i % 5 == 0 ? printf("Buzz\n"): printf("%d\n", i);
    i++;
    Fizzbuzz(n - 1);
}

int main(void){
    printf("Enter a number: ");
    scanf("%d", &n);
    Fizzbuzz(n);
    return 0;
}
//FIZZBUZZ without for loop and else/if statement
#include <stdio.h>
#include <stdlib.h>

int i = 1;
int n = 0;
//Uses switch statement instead of pure ternerary operators.
void fizzbuzz(int n){
    switch(n){
    //Checks if the counter has reached Zero or User had inputted 0
    case 0:
        return;
    default:
      //Checks if the Number is divisible by 15, 5, or 3 and print the respective name. Else prints the number itself
      i % 15 == 0 ? printf("FizzBuzz\n") : i % 3 == 0 ? printf("Fizz\n") : i % 5 == 0 ? printf("Buzz\n"): printf("%d\n", i);
      //increments the counter
      i++;
      //decrements the number
      n--;
      //recurses, i dont think further explanation needed
      fizzbuzz(n); i % 15 == 0 ? printf("FizzBuzz\n") : i % 3 == 0 ? printf("Fizz\n") : i % 5 == 0 ? printf("Buzz\n"): printf("%d\n", i);
    }
}
//Uses pure ternerary operators.
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
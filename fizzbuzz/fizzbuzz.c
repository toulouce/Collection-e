//fizzbuzz without else if statement; but uses for() might get rid of for statement later
#include <stdio.h>

void fizzbuzz(int n){
    printf("FizzBuzz from 1 to %d:\n", n);
    for(int i = 1; i <= n; i++){
      i % 15 == 0 ? printf("FizzBuzz\n") : i % 3 == 0 ? printf("Fizz\n") : i % 5 == 0 ? printf("Buzz\n"): printf("%d\n", i);
    }
}
int main(void){
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    fizzbuzz(n);
    return 0;
}


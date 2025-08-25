//Number Guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  while(1) {
  int num = (rand() % 100) + 1;
  char Continue;
  printf("Do you want to continue(Y/N): ");
  scanf(" %c", &Continue);
  if(Continue == 'Y') {
  printf("Guess the number in between 1-100");
  int guess_count = 1;
  int guess = 0;
  do {
      printf("Guess %c: ", guess_count);
      scanf(" %d", &guess);
      if(guess < num) printf("You guessed too low.");
      else if(guess > num) printf("You guessed too high.");
      else printf("You guessed correct!");
    } while (guess != num);
   } else break; 
  }
  return 0;
}

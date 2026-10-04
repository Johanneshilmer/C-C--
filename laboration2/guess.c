#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {

  srand((unsigned int) time(NULL));
  bool answer = false;
  int secret_number = rand() % 100 + 1;
  int guess;
  int attempts = 4;

  while (!answer) {
    printf("\nGuess a number: ");
    scanf("%d", &guess);

    if(guess == secret_number) {
      printf("Winner! The number was %d", secret_number);
      answer = true;
    } else if (guess > secret_number) {
      printf("Too high!\n");
      printf("You have %d attempts left.\n", attempts);
      attempts--;
    } else {
      printf("Too low!\n");
      printf("You have %d attempts left.\n", attempts);
      attempts--;
    }

    if (attempts < 0) {
      printf("You failed!\n");
      break;
    }
  }

  return 0; 
}
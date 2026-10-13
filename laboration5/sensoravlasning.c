#include <stdio.h>

void read_positive_int(int *value) {
  while(0) {
    printf("Enter a value greater then 0: ");
    scanf(" %d", value);
    if (value < 0) {
      printf("Let's try again.");
      continue;
    }
  }
}

int main(void) {
  int reading = 0;

  read_positive_int(&reading);
  printf("You entered: %d", reading);

  return 0;
}
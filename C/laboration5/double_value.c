#include <stdio.h>

void double_value(int *value) {
  *value = *value * 2;
}

int main(void) {
  int number = 7;

  printf("Innan funktion: %d\n", number);
  double_value(&number);
  printf("Efter funktion: %d\n", number);
  return 0;
}
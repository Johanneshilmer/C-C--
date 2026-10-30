#include <stdio.h>

int main(void) {

  for (int start = 0; start < 100; start++) {
    if (start == 3) {
      printf("Fizz\n");
    } else if (start == 5) {
      printf("Buzz\n");
    } else if (start % 3 == 0 && start % 5 == 0) {
      printf("FizzBuzz\n");
    } else {
      printf("%d\n", start);
    }
  }
  return 0;
}
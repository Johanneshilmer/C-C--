# include <stdio.h>
# include <stdbool.h>

int main(void) {


  for (int number = 1; number <= 20; number++) {
    if (number == 3) {
      printf("Fizz\n");
    } else if (number == 5) {
      printf("Buzz\n");
    } else {
      printf("%d\n", number);
    }
  }
  return 0;
}
#include <stdio.h>

int max_of_two(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int max_of_three(int a, int b, int c) {
    return max_of_two(max_of_two(a, b), c);
}


int main(void) {

  int a, b, c;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  int result = max_of_three(a,b,c);

  printf("Largest number: %d", result);
  return 0;
}
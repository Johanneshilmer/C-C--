#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


int main(void) {
  int x = 10;
  int y = 20;


  printf("Innan swap: x = %d och y = %d\n", x, y);

  swap(&x, &y);

  printf("Efter swap: x = %d och y = %d\n", x, y);

  return 0;
}
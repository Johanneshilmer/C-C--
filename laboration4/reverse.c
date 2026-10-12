#include <stdio.h>

int main(void) {
  int array[5] = {1,2,3,4,5};

  for (int i = 5; i > 0; i--) {
    printf("%d\n", array[i-1]);
  }

}
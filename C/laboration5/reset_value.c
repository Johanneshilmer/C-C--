#include <stdio.h>

void reset_negative(int *value, int length) {
  for (int i = 0; i < length; i++) {
    if(value[i] < 0) {
      value[i] = 0;
    }
  }
}

void loop_out(int *value, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d\n", value[i]);
  }
}

int main(void) {
  int array[5] = {4,3,-4,5,-1};
  int length = sizeof(array) / sizeof(array[0]);

  printf("\nHere is the array before the func:\n");
  loop_out(array, length);

  reset_negative(array, length);


  printf("\nHere is the array after the func:\n");
  loop_out(array, length);

  return 0;
}
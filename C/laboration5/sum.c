#include <stdio.h>

int sum_array(int *arr, int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += *arr;
    arr++;
  }
  return sum;
}

int main(void) {
  int arr[5] = {5,4,5,6,7};
  
  int length = sizeof(arr) / sizeof(arr[0]);

  int sum = sum_array(arr, length);

  printf("The amount in the list: %d", sum);

  return 0;
}
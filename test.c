#include <stdio.h>

int check(int *arr, int length) {
  int temp = *arr;
  for(int i = 0; i < length; i++) {
    if(temp < arr[i]) {
      temp = arr[i];
    }
  }
  return temp;
}

int main(void) {

  int arr[5];
  
  for(int i = 0; i < 5; i++) {
    printf("Enter a value: ");
    scanf("%d", &arr[i]);
  }

  int length = sizeof(arr) / sizeof(arr[0]);

  int big_sum = check(arr, length);

  printf("%d är störst", big_sum);
  

  return 0;
} 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int antal = 6;

  int *arr = malloc(antal * sizeof(*arr));

  if (arr == NULL) {
    printf("Failed to load in.");
    return 1;
  }

  for (int i = 0; i < antal; i++) {
    arr[i] = i * i;
  }

  for (int i = 0; i < antal; i++) {
    printf("%d\n", arr[i]);
  }

  free(arr);
  arr = NULL;

  return 0;
}
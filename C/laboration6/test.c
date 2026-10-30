#include <stdio.h>
#include <stdlib.h>


int *create_squares(int n) {
   int *arr = malloc(n * sizeof(*arr));

   for(int i = 0; i < n; i++) {
    arr[i] = i * i;
   }
   return arr;
}

int main(void) {
  int n = 5;
  int *squares = create_squares(n);

  if (squares == NULL) {
    return 1;
  }

  for (int i = 0; i < n; i++) {
    printf("%d\n", squares[i]);
  }

  free(squares);
  return 0;
}
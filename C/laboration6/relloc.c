#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *sensorer = malloc(4 * sizeof(int));
  int *tmp = realloc(sensorer, 6 * sizeof(int));
  if (tmp == NULL) {
    free(sensorer);
    return 1;
  }
  sensorer = tmp;
  free(sensorer);

  return 0;
}
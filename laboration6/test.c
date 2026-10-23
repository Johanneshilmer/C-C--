#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int antal = 4;

  int *sensorer = malloc(antal * sizeof(int));

  if(sensorer == NULL) {
    printf("Mnnet kunde inte allokeras.\n");
    return 1;
  }

  int *temp = realloc(sensorer, 5 * sizeof(int));

  if (temp != NULL) {
    sensorer = temp;
  }

  sensorer[4] = 21;

  printf("%d\n", sensorer[4]);
  free(sensorer);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int antal = 4;

  int *sensorer = malloc(antal * sizeof(int));

  if(sensorer == NULL) {
    printf("Mnnet kunde inte allokeras.\n");
    return 1;
  }
  
  sensorer[0] = 21;
  printf("%d\n", sensorer[0]);
  free(sensorer);

  return 0;
}
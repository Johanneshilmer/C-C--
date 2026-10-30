#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int antal = 4;

  int *sensorer = calloc(antal, sizeof(int));

  if(sensorer == NULL) {
    return 1;
  }
  
  printf("%d\n", sensorer[0]);
  free(sensorer);

  return 0;
}
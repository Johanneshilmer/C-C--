#include <stdio.h>
#include "jamforelser.h"


int main(void) {

  int a, b, c;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  int result = max_of_three(a,b,c);

  printf("Largest number: %d", result);
  return 0;
}
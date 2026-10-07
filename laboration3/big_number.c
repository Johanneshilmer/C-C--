#include <stdio.h>

int is_positive(int n) {
  if (n > 0) {
    n = 1;
  } else {
    n = 0;
  }
  return n;
/*
  bättre sätt men svårare för nybörjare.
  return n > 0;
*/
  
}


int main(void) {

  int a = 10;
  int result = is_positive(a);
  printf("%d", result);

  return 0;
}
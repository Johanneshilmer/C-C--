#include <stdio.h>

int main(void) {
  int reading[6] = {1,5,6,3,5,4};
  int *p = &reading[2];

  printf("Here is the index2: %d\n", *p);
  int temp = p - reading; 
  // p är adressen till reading[0]
  // reading är adressen till arrays första elemet, alltså reading[0]



  printf("%d\n", temp);
  


  return 0;
}
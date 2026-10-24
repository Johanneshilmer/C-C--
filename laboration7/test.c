#include <stdio.h>

typedef struct {
  char name[50];
  int age;
} new_ppl;

int main(void) {

  new_ppl p1 = {"johannes", 30};

  printf("My name is %s and i am %d years old.", p1.name, p1.age);

  return 0;
}
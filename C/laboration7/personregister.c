#include "stdio.h"

typedef struct {
  char name[50];
  int age;
  float height;
} Person;

void print_person(Person p) {
  printf("Your name is %s and you age is %d and your height is %.1lf.", p.name, p.age, p.height);
}

int main(void) {
  Person johannes = {"Johannes", 30, 180.0};

  print_person(johannes);
  return 0;
}
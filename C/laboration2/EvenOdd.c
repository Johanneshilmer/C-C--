#include <stdio.h>

int main(void) {
  int user_input;

  printf("Enter a number: ");
  scanf("%d", &user_input);

  
  if (user_input % 2 == 0) {
    printf("Even");
  } else {
    printf("Odd");
  }

  return 0;
}
#include <stdio.h>

int main(void) {
  
  int count = 0;
  int user_input;
  printf("Enter a number: ");
  scanf("%d", &user_input);
  
  if (user_input % 2 == 0) {
    count = count + user_input;
  }

  for(int i = 1; i <= user_input; i++) {
    if (i % 2 != 0) {
      continue;
    }

    count = count + i;
  }

  printf("The amount is %d", count);

  return 0;
}
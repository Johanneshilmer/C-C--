# include <stdio.h>

int main(void) {

  int user_input;

  printf("Enter a number: ");
  scanf("%d", &user_input);
  for (int a = 1; a <= 10; a++) {
    printf("%d * %d = %d\n", user_input, a, (user_input*a));
  }

  return 0;
}
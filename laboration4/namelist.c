#include <stdio.h>

int main(void) {
  char names[5][20];

  for (int i = 0; i < 5; i++) {
    printf("Enter a name%d: ", i + 1);
    scanf("%19s", names[i]);
  }

  printf("\nNames in the list:\n");

  for (int i = 0; i < 5; i++) {
    printf("%s\n", names[i]);
  }

  return 0;
}
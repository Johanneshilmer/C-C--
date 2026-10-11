#include <stdio.h>
#include <string.h>

int main(void) {
  char names[5][20];
  int count = 0;
  char letter;
  int longest_name = 0;

  for (int i = 0; i < 5; i++) {
    printf("Enter a name %d: ", i + 1);
    scanf("%19s", names[i]);
  }

  printf("\nNames in the list:\n");

  for (int i = 0; i < 5; i++) {
    printf("%d: %s\n", i + 1, names[i]);
  }

  printf("\nEnter a letter: ");
  scanf(" %c", &letter);

  for (int i = 0; i < 5; i++) {
    if (names[i][0] == letter) {
      count++;
    }
  }

  printf("Amount of names starting with %c: %d\n", letter, count);

  for (int i = 1; i < 5; i++) {
    if(strlen(names[i]) > strlen(names[longest_name])) {
      longest_name = i;
    }
  }

  printf("The longest name is: %s\n", names[longest_name]);

  return 0;
}
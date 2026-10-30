#include <stdio.h>
#include <string.h>

int count_starting_with(char names[][20], char letter, int count) {
  for (int i = 0; i < 5; i++) {
    if (names[i][0] == letter) {
      count++;
    }
  }
  return count;
}

int index_of_longest(char names[][20], int longest_name) {
  for (int i = 1; i < 5; i++) {
    if(strlen(names[i]) > strlen(names[longest_name])) {
      longest_name = i;
    }
  }
  return longest_name;
}

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


  count = count_starting_with(names, letter, count);

  printf("Amount of names starting with %c: %d\n", letter, count);

  longest_name = index_of_longest(names, longest_name);

  printf("The longest name is: %s\n", names[longest_name]);

  return 0;
}
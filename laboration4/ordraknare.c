#include <stdio.h>
#include <string.h>

int main(void) {
  char word_list[][50] = {""};
  char word[50];
  char longest_word[50] = "";
  int sum = 0;
  int spot = 0;
  int letters = 0;

  while(1) {
    printf("Enter a word: ");
    scanf("%49s", word);

    if(strcmp(word, "sluta") == 0) {
      break;
    }

    if(strlen(word) > strlen(longest_word)) {
      strcpy(longest_word, word);
    }

    strcpy(word_list[spot], word);
    spot+= 1;
    sum+= 1;
    letters += strlen(word);
  }

  double average = (double) letters / spot;

  printf("\nThe words in the list:\n");
  for(int i = 0; i < spot; i++) {
    printf("%s\n", word_list[i]);
  }

  printf("\nAmount of words: %d", sum);
  printf("\nLongest word: %s", longest_word);
  printf("\nAverage word length: %.2lf", average);
  return 0;
}
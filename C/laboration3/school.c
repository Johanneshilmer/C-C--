#include <stdio.h>

void check_score(int score) {
  if (score >= 60) {
    printf("Godkant\n");
  } else {
    printf("Underkant\n");
  }
}

int main(void) {
  int score;

  printf("Provresultat 1: ");
  scanf("%d", &score);
  check_score(score);

  printf("Provresultat 2: ");
  scanf("%d", &score);
  check_score(score);

  printf("Provresultat 3: ");
  scanf("%d", &score);
  check_score(score);


  return 0;
}
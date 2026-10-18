#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int user_input;
  int sum = 0;

  printf("Enter amount of data: ");

  if (scanf("%d", &user_input) != 1 || user_input <= 0) {
    printf("Invalid amount of data.\n");
    return 1;
  }

  int *readings = malloc(user_input * sizeof(*readings));

  if (readings == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  
  scanf("%d", &user_input);

  for (int i = 0; i < user_input; i++) {
      printf("Enter data %d: ", i + 1);
      scanf("%d", &readings[i]);
  }

  for (int i = 0; i < user_input; i++) {
    sum += readings[i];
  }

  double average = (double)sum / user_input;

  printf("Sum: %d\n", sum);
  printf("Average: %.2lf\n", average);

  free(readings);
  readings = NULL;


  return 0;
}
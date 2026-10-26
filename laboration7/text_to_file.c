#include <stdio.h>

int main(void) {
  FILE *file = fopen("tal.txt", "w");

  if (file == NULL) {
    printf("Could not open the file.");
    return 1;
  }

  fprintf(file, "20\n");
  fprintf(file, "30\n");
  fprintf(file, "40\n");

  fclose(file);

  return 0;
}
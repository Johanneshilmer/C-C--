#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int count;

  printf("Hur manga matvarden vill du lagra? ");
  scanf("%d", &count);

  int *readings = malloc(count * sizeof(*readings));
  if (readings == NULL) {
    printf("Minnesallokering misslyckades\n");
    return 1;
  }

  for (int i = 0; i < count; i++) {
    readings[i] = i * 10;
  }

  for (int i = 0; i < count; i++) {
    printf("readings[%d] = %d\n", i, readings[i]);
  }

  free(readings);
  readings = NULL;

  return 0;
}
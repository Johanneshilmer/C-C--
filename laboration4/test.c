#include <stdio.h>
#include <string.h>

int main(void) {
  char first[20] = "Sensor";
  char second[] = "42";

  printf("Langd pa \"%s\": %zu\n", first, strlen(first));

  strcat(first, second);
  printf("Efter strcat: %s\n", first);

  if (strcmp(first, "Sensor42") == 0) {
    printf("Strangarna ar identiska\n");
  }

  return 0;
}
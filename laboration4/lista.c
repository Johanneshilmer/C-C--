#include <stdio.h>

int main(void) {
  int lista[] = {1,2,3,4,5,6};

  int nums = sizeof(lista) / sizeof(lista[0]); // Tar fram antal element i listan

  for (int i = 0; i < nums; i++) {
    printf("%d\n", lista[i]);
  }

  return 0;
}


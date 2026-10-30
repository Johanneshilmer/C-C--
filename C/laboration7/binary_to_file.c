#include <stdio.h>

int main(void) {

  FILE *file = fopen("binary.bin", "wb");

  if (file == NULL) {
    printf("Error open file.");
    return 1;
  }

  int a = 1;

  fwrite(a, sizeof(a),1 , file);


  return 0;
}
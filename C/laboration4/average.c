#include <stdio.h>

int main(void) {
  int readings[10] = {23, 18, 31, 25, 20, 16, 29, 22, 27, 19};

  int min = readings[0];
  int max = readings[0];

  int sum = 0;

  int length = sizeof(readings) / sizeof(readings[0]);

  for (int i = 0; i < length; i++) {
    if (readings[i] < min) {
      min = readings[i];
    }

    if (readings[i] > max) {
      max = readings[i];
    }

    sum += readings[i];
  }

  double average = (double)sum / length;

  printf("Max: %d\n", max);
  printf("Min: %d\n", min);
  printf("Average: %.2lf\n", average);

  return 0;
}
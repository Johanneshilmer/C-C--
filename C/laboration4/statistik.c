#include <stdio.h>

// Find min value
double find_min(double readings[8],int length) {
  double min = readings[0];
  for (int i = 0; i < length; i++) {
    if(readings[i] < min) {
      min = readings[i];
    }
  }
  return min;
}

// Find max value
double find_max(double readings[8],int length) {
  double max = readings[0];
  for (int i = 0; i < length; i++) {
    if(readings[i] > max) {
      max = readings[i];
    }
  }
  return max;
}

//Find average
double find_average(double sum, int length) {
  return sum / length; 
}

// Find sum of all items in array
double sum_array(double readings[8], int length) {
  double sum = 0.0;

  for (int i = 0; i < length; i++) {
    sum += readings[i];
  }
  return sum;
}

int main(void) {
  double readings[8] = {19.52, 22.51, 25.12, 23.15, 19.21, 24.51, 21.42, 20.42};

  int length = sizeof(readings) / sizeof(readings[0]);

  double sum = sum_array(readings, length);
  double min = find_min(readings, length);
  double max = find_max(readings, length);
  double average = find_average(sum, length);


  printf("The average: %.2lf\n", average);
  printf("The max: %.2lf\n", max);
  printf("The min: %.2lf\n", min);

  return 0;
}
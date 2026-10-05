#include <stdio.h>

void skriv_sensorvarde(int sensor_id, double varde) {
  printf("Sensor %d: %.1f C\n", sensor_id, varde);
}

int main(void) {
  skriv_sensorvarde(1,21.4);
  skriv_sensorvarde(2,19.4);
  return 0;
}
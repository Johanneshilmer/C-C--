
// Använder typedef, kortare mer läsbar.
#include <stdio.h>
typedef struct {
  int id;
  char namn[20];
  double varde;
} Sensor;

int main(void) {
  Sensor s1 = {1, "Temp", 21.5};
  printf("%d %s %.1f\n", s1.id, s1.namn, s1.varde);
  return 0;
}
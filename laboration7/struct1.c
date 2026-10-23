/*
#include <stdio.h>
#include <string.h>

struct sensor
{
  int id;
  char name[20];
  double varde;
};


int main(void) {
  struct sensor s1;
  s1.id = 1;
  strcpy(s1.name, "Temp");
  s1.varde = 21.5;
  printf("%d %s %.1lf", s1.id, s1.name,s1.varde);

  return 0;
}
*/

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
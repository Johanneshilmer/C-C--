#include <stdio.h>

typedef struct { int id; double varde; } Sensor;

void fordubbla(Sensor s) {
  s.varde = s.varde * 2;
}

int main(void) {
  Sensor s1 = {1, 21.5};
  fordubbla(s1);
  printf("%.1f\n", s1.varde);
  return 0;
}
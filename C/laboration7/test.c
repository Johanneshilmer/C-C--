#include <stdio.h>

typedef struct {
  int x;
  int y;
} Point;

int main(void) {

  Point points[3];

  points[0] = (Point){2,3};
  points[1] = (Point){5,6};
  points[2] = (Point){7,8};

  for(int i = 0; i < 3; i++) {
    printf("Punkt %d: x = %d, y = %d\n", i + 1, points[i].x, points[i].y);
  }

  return 0;
}
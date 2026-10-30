#include <stdio.h>

typedef struct {
  int x;
  int y;
} Point;

void scale_point(Point *p, int factor) {
  p->x = p->x * factor;
  p->y = p->y * factor;
}

int main(void) {
  Point p = {2, 3};

  scale_point(&p, 5);
  printf("%d %d\n", p.x, p.y);

  return 0;
}
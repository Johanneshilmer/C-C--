#include <stdio.h>

void swap(int *a, int *b, int *c) {
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    printf("%d %d %d\n", *a, *b, *c);
}


int main(void) {

    int a = 100;
    int b = 20;
    int c = 300;

    swap(&a, &b, &c);

    

  return 0;
}
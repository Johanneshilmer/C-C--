#include "jamforelser.h"

int max_of_two(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int max_of_three(int a, int b, int c) {
    return max_of_two(max_of_two(a, b), c);
}
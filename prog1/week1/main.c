#include <stdio.h>

int main(void) {
    int x, z = 7;
    x = (23 + 7) / 10 - 5;
    x = x + z;
    z = (12 % x);
    printf("x=%d; z=%d", x, z);
}
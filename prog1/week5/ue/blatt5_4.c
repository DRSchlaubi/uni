#include <stdio.h>

#include "shared.h"

int kgV(const int a, const int b) {
    // (a*b)/ggT(a, b);
    return a * b / ggT(a, b);
}

void testKgV(const int a, const int b) {
    printf("kgV(%d, %d) = %d\n", a, b, kgV(a, b));
}

int main() {
    testKgV(3, 5);
    testKgV(6, 9);
    testKgV(12, 18);
}

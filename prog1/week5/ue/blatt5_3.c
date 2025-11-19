#include <stdio.h>

#include "shared.h"

void testGGT(const int a, const int b) {
    printf("ggT(%d, %d) = %d\n", a, b, ggT(a, b));
}

int main() {
    testGGT(18, 27);
    testGGT(4, 6);
    testGGT(36, 84);
    testGGT(12, 32);
}

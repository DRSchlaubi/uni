#include <stdbool.h>
#include <stdio.h>

bool mauern(const int klein, const int gross, const int ziel) {
    // (ziel % 5 <= klein) && (klein + (gross * 5)) >= ziel
    // (ziel % 5 <= klein) Check whether we have enough small bricks to reach the remainder of bricks
    // (klein + (gross * 5)) >= ziel Check whether we have enough bricks in total
    return ziel % 5 <= klein && klein + gross * 5 >= ziel;
}

void testMauern(const int klein, const int gross, const int ziel) {
    const int out = mauern(klein, gross, ziel);
    char* outStr = out ? "true" : "false";

    printf("mauern(%d, %d, %d) = %s\n", klein, gross, ziel, outStr);
}

int main() {
    testMauern(3, 1, 8);
    testMauern(3, 1, 9);
    testMauern(2, 3, 13);
    testMauern(3, 2, 10);
}

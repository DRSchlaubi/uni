#include <stdio.h>

int pow(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int equation(int x) {
    return pow(x, 3) - 73 * pow(x, 2) + 1655 * x - 11951;
}

int main() {
    for (int i = 0; i <= 100; i++) {
        if (equation(i) == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

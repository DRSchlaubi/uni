#include <stdbool.h>
#include <stdio.h>

int runde10(int n) {
    int last_digit = n % 10;
    if (last_digit <= 4) {
        return n - last_digit;
    }

    return n + 10 - last_digit;
}

int rundeSumme(const int a, const int b, const int c) {
    const int rounded_a = runde10(a);
    const int rounded_b = runde10(b);
    const int rounded_c = runde10(c);

    return rounded_a + rounded_b + rounded_c;
}

void testRundeSumme(const int a, const int b, const int c) {
    printf("rundeSumme(%d, %d, %d) = %d\n", a, b ,c ,rundeSumme(a, b, c));
}

int main() {
    testRundeSumme(12, 13, 14);
    testRundeSumme(123, 135, 147);
    testRundeSumme(1231, 1353, 1471);
}

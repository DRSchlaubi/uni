
#include <stdio.h>

int main() {
    int a, b = 5, c, d;
    a = b / 2; // => 2
    printf("%d\n", a);
    c = b % 2; // => 1
    printf("%d\n", c);
    d = 1 - (b - 1); // => -3
    printf("%d\n", d);
    b = b * -3; // =>  -15
    printf("%d\n", b);
    d = d % 3; // => // 0
    printf("%d\n", d);
    c = c + b * d + 4; // => // 5
    printf("%d\n", c);
    a = b + d; // =>  -15
    printf("%d\n", a);
    a = 0; b = 2; c = 3; d = 4;
    a = (b + 2) * 2 * c + 1; // => 25
    printf("%d\n", a);
    a = b * d * c * (-1); // => -24
    printf("%d\n", a);

    return 0;
}

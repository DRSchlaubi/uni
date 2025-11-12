#include <stdbool.h>
#include <stdio.h>

int main() {
    int x = 1, y = 2;
    bool z = true;

    // (y*5)+x; y=y+1 => 5*2+1 => 1; y = 3
    printf("%d\n", y++ * 5 + x);
    printf("%d\n", y);
    // x * 5 % (++y) => 1*5 % 4 = 1; y = 4
    printf("%d\n", x * 5 % ++y);
    // x-y; x=x+i;y=y+1 => x=2;y=3
    printf("%d\n", x++ - y--);
    // ((x * 5) < y) || (z && (x > y))
    printf("%d\n", x * 5 < y || z && x > y);
    // x = y = (y+1)
    printf("%d\n", x = y = y + 1);
    return 0;
}

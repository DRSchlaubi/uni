#include <stdbool.h>
#include <stdio.h>

int main() {
    bool a = true, b = false;
    int x = 18, y = (x / 4) % 3, z;
    x = x * 2;
    a = a && true;
    b = (a && b) || false;
    // printf("%d\n", x);
    printf("%d\n", y);
}

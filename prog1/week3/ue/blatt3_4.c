#include <stdio.h>

int main() {
    int x;
    scanf_s("%d", &x);

    int sum = 0;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            sum += i;
            printf("%d\n", i);
        }
    }

    printf("Summe der Teiler: %d\n", sum);
    return 0;
}

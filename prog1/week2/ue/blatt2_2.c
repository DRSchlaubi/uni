#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    printf("Bitte gebe 2 Zahlen an (1-6): ");
    scanf_s("%d %d", &a, &b);

    if (a < 1 || a > 6 || b < 1 || b > 6) {
        printf("Zahlen muessen zwischen 1 und 6 liegen.\n");
        return 0;
    }

    if (a == b) {
        printf("3er Pasch\n");
    } else if (a == 1 && b == 2) {
        printf("Maexchen\n");
    } else {
        if (a < b) {
            const int tmp = b;
            b = a;
            a = tmp;
        }

        printf("%d%d\n", a, b);
    }
}

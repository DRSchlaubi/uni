#include <stdio.h>

int main() {
    int a,b;
    printf("Bitte gebe 2 Zahlen an (a b): ");
    scanf_s("%d %d", &a, &b);

    int lastDigitA = a % 10;
    int lastDigitB = b % 10;

    if (lastDigitA == lastDigitB) {
        printf("Letzte Ziffer gleich\n");
    }

    return 0;
}

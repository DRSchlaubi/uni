#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, n;

    printf("Bitte gebe die Anzahl an kleinen Schokoriegeln an: ");
    scanf_s("%d", &a);
    printf("Bitte gebe die Anzahl an grossen Schokoriegeln an: ");
    scanf_s("%d", &b);
    printf("Bitte gebe die gesamte Masse an (kg): ");
    scanf_s("%d", &n);

    const int large_bars = min(n / 5, b);
    const int remaining = n - large_bars * 5;

    int output = -1;
    if (remaining <= a) {
        output = remaining;
    }

    printf("%d\n", output);

    return 0;
}

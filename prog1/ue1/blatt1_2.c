// Importieren von stdio.h
#include <stdio.h>
// Importieren von stdbool.h
#include <stdbool.h>

int main() {
    int i = 23, j; // Deklaration int i = 23, j

    // Deklaration zahl = 42
    int zahl = 42;

    // Zuweisung j = i + zahl
    j = i + zahl;
    j = j + 1; // erhöhe j um 1
    printf("j hat den Wert %d\n", j);

    // Zuweisung von Variable "zahl" auf Ergebnis von "2 * (17 + 4) - 7 / 3"
    zahl = 2 * (17 + 4) - 7 / 3;
    printf("zahl hat den Wert %d\n", zahl);

    return 0;
}

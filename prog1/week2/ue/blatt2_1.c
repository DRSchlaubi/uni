#include <stdio.h>

int main() {
    int a, b;

    printf("Bitte gebe die Hoehe des Rechteks an (m): ");
    scanf_s("%d", &a);

    printf("Bitte gebe die Laenge des Rechtecks an (m): ");
    scanf_s("%d", &b);

    int A = a * b;
    int U = 2 * (a + b);

    printf("Das Rechteck mit einer Laenge von %um und einer Hoehe von %um, hat einen Umfang von %um und eine Flaeche von %um.",
           a, b, U, A);

    return 0;
}

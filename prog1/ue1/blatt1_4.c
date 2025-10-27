#include <stdio.h>

int main() {
    int a = 5, b = 10;

    int A = a * b;
    int U = 2 * (a + b);

    printf("Das Rechteck mit einer Laenge von %u und einer Hoehe von %u, hat einen Umfang von %u und eine Flaeche von %u.",
           a, b, U, A);

    return 0;
}

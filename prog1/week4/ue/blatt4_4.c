#include <math.h>
#include <stdio.h>

void leibniz() {
    double pi = 0.0;

    for (int i = 0; i < 10000000; i++) {
        pi += pow(-1, i) / (2 * i + 1);
    }

    printf("PI/4: %lf\n", pi);
    printf("PI: %lf\n", pi * 4);
}

void wallis() {
    double pi = 1.0;

    for (int i = 1; i <= 10000000; i++) {
        pi *= (2.0 * i) / (2.0 * i + 1);
        pi *= (2.0 * i) / (2.0 * i - 1);
    }

    printf("PI/2: %lf\n", pi);
    printf("PI: %lf\n", pi * 2);
}

int main() {
    leibniz();
    wallis();

    return 0;
}

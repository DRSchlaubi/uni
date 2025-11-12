#include <stdio.h>

double harmonic_double(const int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        const double i_double = i;
        sum += 1 / i_double;
    }

    return sum;
}

double harmonic_float(const int n) {
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        const float i_double = (float) i;
        sum += 1 / i_double;
    }

    return sum;
}

int main() {
    printf("Float: \n");
    printf("n = 10.000: %f\n", harmonic_float(10000));
    printf("n = 100.000: %f\n", harmonic_float(100000));
    printf("n = 1.000.000: %f\n", harmonic_float(1000000));
    printf("Double: \n");
    printf("n = 10.000 %f\n", harmonic_double(10000));
    printf("n = 100.000 %f\n", harmonic_double(100000));
    printf("n = 1.000.000: %f\n", harmonic_double(1000000));

    // => Doubles haben mehr precision

    return 0;
}

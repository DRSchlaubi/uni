#include <math.h>
#include <stdio.h>

int cross_sum(int num) {
    int current = num;
    int numberOfDigits = 0;
    while (current > 0) {
        current /= 10;
        numberOfDigits++;
    }
    int sum = 0;
    for (int i = 0; i <= numberOfDigits; i++) {
        int numAtPosition = num / (int) pow(10, i) % 10;
        sum += numAtPosition;
    }
    return sum;
}

int iterative_cross_sum(int x) {
    int current = x;

    while (current >= 10) {
        current = cross_sum(current);
    }

    return current;
}


int main() {
    int x;
    scanf_s("%d", &x);

    int cross_sum_result = cross_sum(x);
    int iterative_cross_sum_result = iterative_cross_sum(x);

    printf("Cross sum: %d\n", cross_sum_result);
    printf("Iterative sum: %d\n", iterative_cross_sum_result);

    return 0;
}

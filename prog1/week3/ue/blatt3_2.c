#include <math.h>
#include <stdio.h>

void taskA() {
    printf("Task a)\n");
    for (int i = 100; i <= 200; i++) {
        printf("%d\n", i);
    }
}

void taskB() {
    printf("Task b)\n");
    for (int i = 111; i <= 222; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}

void taskC() {
    printf("Task c)\n");
    for (int i = 333; i >= 222; i -= 3) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}

void taskD() {
    printf("Task d)\n");
    int sum = 0;
    for (int i = 0; i <= 1000; i += 3) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    printf("Ergebnis: %d\n", sum);
}

int myPow(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

void taskE() {
    printf("Task e)\n");
    printf("Bitte gebe eine Ganzzahl ein: ");
    int num;
    scanf_s("%d", &num);

    int current = num;
    int numberOfDigits = 0;
    while (current > 0) {
        current /= 10;
        numberOfDigits++;
    }
    for (int i = 0; i <= numberOfDigits; i++) {
        int numAtPosition = (num / myPow(10, i)) % 10;
        if (numAtPosition == 7) {
            printf("true\n");
            return;
        }
    }
    printf("false\n");
}

void taskF() {
    printf("Task e)\n");
    printf("Bitte gebe eine Ganzzahl ein: ");
    int num;
    scanf_s("%d", &num);

    int current = num;
    int numberOfDigits = 0;
    while (current > 0) {
        current /= 10;
        numberOfDigits++;
    }
    int count = 0;
    for (int i = 0; i <= numberOfDigits; i++) {
        int numAtPosition = (num / myPow(10, i)) % 10;
        if (numAtPosition == 7) {
            count++;
        }
    }
    printf("Die Zahl enthaelt %d siebenen", count);
}

int main() {
    taskA();
    taskB();
    taskC();
    taskD();
    taskE();
    taskF();

    return 0;
}

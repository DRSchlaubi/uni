#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// https://herzbewegt.org/bmi/
void printBMIClass(double bmi) {
    if (bmi < 18.5) {
        printf("Untergewicht\n");
    } else if (bmi <24.9) {
        printf("Normalgewicht\n");
    } else if (bmi <29.9) {
        printf("Normalgewicht\n");
    } else if (bmi < 34.9) {
        printf("Adipositas Grad 1\n");
    } else {
        printf("Adipositas Grad 2\n");
    }
}

double runBMICalculator() {
    double height, weight;
    printf("Gebe das Gewicht an (in kg):");
    scanf_s("%lf", &weight);
    printf("Gebe das Groeße an (in m):");
    scanf_s("%lf", &height);

    return weight / pow(height, 2);
}

int main() {
    int count = 0;

    while (true) {
        printf("Person %d\n", ++count);
        const double bmi = runBMICalculator();

        printf("BMI: %lf\n", bmi);
        printBMIClass(bmi);

        char answer;
        printf("Weitere Person? (y/n): ");
        scanf_s(" %c", &answer);

        if (answer != 'y') {
            break;
        }
    }
}

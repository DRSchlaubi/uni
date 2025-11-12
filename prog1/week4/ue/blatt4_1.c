#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    unsigned char ver;
    printf("Soll bei negativen Zahlen abgebrochen werden? (y/n)");
    scanf_s("%c", &ver);

    const bool abortIfNegative = ver == 'y';

    int current_max = INT_MIN;
    for (int i = 0; i < 10;) {
        printf("Bitte gebe eine Zahl ein: ");
        int num;
        scanf_s("%d", &num);
        if (num > current_max) {
            current_max = num;
        }
        if (num < 0) {
            if (abortIfNegative) {
                break;
            }
            continue;
        }

        i++;
    }

    printf("Maximaler Wert: %d", current_max);
    return 0;
}

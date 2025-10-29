#include <stdio.h>

int main() {
    int n;
    printf("Bitte gebe eine Zahl an:");
    scanf_s("%d", &n);

    int modulo = n % 57;

    if (modulo == 0) {
        printf("Scherzkeks\n");
    } else {
        printf("%d\n", modulo);
    }

    return 0;
}

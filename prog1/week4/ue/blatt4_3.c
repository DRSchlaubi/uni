#include <stdio.h>

// Gröte fakultät für int: 12! (479.001.600) (13! = 6.227.020.800 > 2^31-1)
// Gröte fakultät für uint: 12! (479.001.600) (13! = 6.227.020.800 > 2^32-1)
// Gröte fakultät für uint: 20! (2.432.902.008.176.640.000) (21! = 51 090 942 171 709 440 000 > 2^63-1)
// Gröte fakultät für uint: 20! (2.432.902.008.176.640.000) (21! = 51 090 942 171 709 440 000 > 2^64-1)

int main() {
    int input;
    printf("Bitte geben Sie eine Zahl ein: ");
    scanf_s("%d", &input);

    if (input == 0) {
        printf("1");
        return 0;
    }

    unsigned long long factorial = 1;
    for (int i = 1; i <= input; i++) {
        factorial *= i;
    }

    printf("%lld", factorial);
    return 0;
}

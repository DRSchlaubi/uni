#include <stdio.h>

int countArr(int arr[], int n, int modulo) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == modulo) count++;
    }

    return count;
}

int countEven(int f[], int n) {
    return countArr(f, n, 0);
}

int countOdd(int f[], int n) {
    return countArr(f, n, 1);
}

int main() {
    int f[] = {1, 2, 3, 4, 5, 6};
    printf("Even: %d\n", countEven(f, 6));
    printf("Odd: %d\n", countOdd(f, 6));

    int g[] = {1, 5, 8, 3, 9, 6, 5};
    printf("Even: %d\n", countEven(g, 7));
    printf("Odd: %d\n", countOdd(g, 7));
}
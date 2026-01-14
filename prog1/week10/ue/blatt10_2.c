#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum(const int *arr, const int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}

int min(const int *arr, const int len) {
    int min = INT_MAX;
    for (int i = 0; i < len; i++) {
        int element = arr[i];
        if (element < min) min = element;
    }
    return min;
}

int max(const int *arr, const int len) {
    int max = INT_MIN;
    for (int i = 0; i < len; i++) {
        int element = arr[i];
        if (element > max) max = element;
    }
    return max;
}

double average(const int *arr, const int len) {
    const int arr_sum = sum(arr, len);
    return (double) arr_sum / len;
}

int main() {

    printf("Bitti bitti Anzahl: \n");
    int n;
    scanf_s("%d", &n);

    int arr[n];
    srand(time(NULL)); // NOLINT(*-msc51-cpp)
    for (int i = 0; i < n; i++) {
        int random = rand() % 1000 + 1; // NOLINT(*-msc50-cpp)
        arr[i] = random;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Summe: %d\n", sum(arr, n));
    printf("Minimum: %d\n", min(arr, n));
    printf("Maximum: %d\n", max(arr, n));
    printf("Durchschnitt: %.2f\n", average(arr, n));
}

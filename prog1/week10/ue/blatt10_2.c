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

int min_arr(const int *arr, const int len) {
    int min = INT_MAX;
    for (int i = 0; i < len; i++) {
        int element = arr[i];
        if (element < min) min = element;
    }
    return min;
}

int max_arr(const int *arr, const int len) {
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

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }
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
    printf("Minimum: %d\n", min_arr(arr, n));
    printf("Maximum: %d\n", max_arr(arr, n));
    printf("Durchschnitt: %.2f\n", average(arr, n));

    free(arr);
}

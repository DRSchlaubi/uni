#include <limits.h>
#include <stdio.h>

void min_max(const int arr[], const int size) {
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("Min: %d, Max: %d\n", min, max);
}

int main() {
    const int arr1[] = {1, 2, 3, 4, 5};
    min_max(arr1, 5);
    const int arr2[] = {-1, -2, -3, -4, -5};
    min_max(arr2, 5);
    const int arr3[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    min_max(arr3, 11);
}

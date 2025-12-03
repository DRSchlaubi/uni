#include <stdio.h>

void print_arr(int arr[], const int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap_item(int arr1[], int arr2[], int off) {
    int tmp = arr1[off];
    arr1[off] = arr2[off];
    arr2[off] = tmp;
}

void swap(int arr1[], int arr2[], const int n) {
    for (int i = 0; i < n; i++) {
        swap_item(arr1, arr2, i);
    }
}

void reverse(int arr[], const int n) {
    int tmp[n];
    for (int i = 0; i < n; i++) {
        tmp[i] = arr[n-i-1];
    }
    swap(arr, tmp, n);
}

void test_reverse(int arr[], const int n) {
    printf("Before\n");
    print_arr(arr, n);
    reverse(arr, n);
    printf("After\n");
    print_arr(arr, n);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6};
    int arr3[] = {1, -5, -8, 4, 1, 9};

    test_reverse(arr, 5);
    test_reverse(arr2, 6);
    test_reverse(arr3, 6);
}


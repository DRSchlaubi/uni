#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(20 * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < 20; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < 20; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);
}

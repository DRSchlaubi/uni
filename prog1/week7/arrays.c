#include <stdio.h>

int main() {
    char word[5] = "hallo";
    char word2[4] = "hallo";

    int k = 0, arr1[] = {3, 4, 5}, arr2[3];
    arr2[0] = 3;
    arr2[1] = 4;
    arr2[2] = 5;

    printf("%s\n", arr1 == arr2 ? "true" : "false");
    arr1[++k] = 7;
    ++arr2[k++];

    printf("%d %d", arr1[1], arr2[1]);

    char msg[10] = "Bonjour";

    printf("%s\n{", msg);

    int a[3] = {1};
    for (int i = 0; i < 10; i++) {
        printf("%d, ", msg[i]);
    }
    printf("}\n");
}


int series(int result[], const int n, const int off) {
    int i = 1;
    for (;i <= n; i++) {
        result[n+off] = i;
    }

    return i;
}

int seriesUp(int result[], const int n) {
    int total = 0;
    for (int i = 0; i <= n; i++) {
        total += series(result, i, i - 1);
    }
    return total;
}
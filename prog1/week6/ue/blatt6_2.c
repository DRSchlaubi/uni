#include <stdio.h>

int countDigitsIterative(int n) {
    int count = 0;
    int current = n;
    while (current > 0) {
        current /= 10;
        count++;
    }
    return count;
}

int countDigitsRecursive(int n) {
    if (n < 10) return 1;
    return 1 + countDigitsRecursive(n / 10);
}

int main() {
    printf("%d\n", countDigitsIterative(12345));
    printf("%d\n", countDigitsRecursive(12345));
}

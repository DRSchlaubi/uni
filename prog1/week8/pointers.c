#include <stdio.h>

void task1() {
    int a = 10, b = 20;
    int *aPtr = &a, *bPtr = &b;
    printf("%d, %d\n", *aPtr, *bPtr);
    printf("%p, %p\n", aPtr, bPtr);
    printf("%p, %p\n", &a, &b);
    printf("%p, %p\n", &aPtr, &bPtr);
}

void task2() {
    int i;
    int *ip;
    i = 5;
    ip = &i;
    *ip = *ip + *ip;

    printf("%d\n", i);
}

void task3() {
    int n = 7;
    int *y = &n;
    int x = *y * 2;
    printf("%d\n", x);
    int sum, var = 11;
    int *varptr = &var;
    *varptr += 4;
    sum = var + *varptr;
    printf("%d\n", sum);
}

void task4() {
    int array[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int a, b, c, d, *ptr = NULL;
    a = *array;
    printf("%d\n", a);
    b = *(array + 3);
    printf("%d\n", b);
    ptr = &array[3];
    c = *ptr;
    printf("%d\n", c);
    ptr = array + 2;
    d = *ptr;
    printf("%d\n", d);
}

void plusFuenf(int x) {
    x = x + 5;
}

void plusFuenfArray(int a[10]) {
    for (int i = 0; i < 10; i++)

        a[i] = a[i] + 5;
}

int task5(void) {
    int y = 10, b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    plusFuenf(y);

    plusFuenfArray(b);


    for (int i = 0; i < 10; i++) {
        printf("%d\n", b[i]);
    }
}

void sum(int arr[], int len, int *erg) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    *erg = sum;
}


void task6() {
    int a = 1, b = 2, c = 3;
    int *ptr1 = &a, *ptr2 = &b, *ptr3 = &c;
    printf("%p\n", ptr1);
    printf("%p\n", ptr2);
    printf("%p\n", ptr3);
    printf("%p\n", *(ptr2 + 1));
}


int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
}

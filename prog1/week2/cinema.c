#include <stdbool.h>
#include <stdio.h>

void fail() {
    printf("You are not allowed to enter the cinema.\n");
}

void success() {
            printf("You are allowed to enter the cinema.\n");
}

int main() {
    int age;

    printf("Enter your age: ");
    scanf_s("%d", &age);

    bool needsTicket = age < 65;
    bool isAllowed = age >= 16;

    if (!isAllowed) {
        fail();
    } else if (!needsTicket) {
        success();
    } else {
        char hasTicket;
        printf("Do you have a ticket? (y/n): ");
        scanf_s(" %c", &hasTicket, 1);

        if (hasTicket == 'y') {
            success();
        } else {
            fail();
        }
    }

    return 0;
}


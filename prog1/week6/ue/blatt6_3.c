#include <stdio.h>

#include "chars.h"

void printBoolean(bool a) {
    printf("%s\n", a ? "true" : "false");
}

int main() {
    printBoolean(isUpper('A'));
    printBoolean(isLower('A'));
    printBoolean(isDigit('A'));
    printf("\n");
    printBoolean(isUpper('a'));
    printBoolean(isLower('a'));
    printBoolean(isDigit('a'));
    printf("\n");
    printBoolean(isUpper('0'));
    printBoolean(isLower('0'));
    printBoolean(isDigit('0'));
}

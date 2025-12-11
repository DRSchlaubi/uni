#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool palindrom(char str[]) {
    size_t len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - i - 1])) return false;
    }
    return true;
}

void testPalindrom(char str[]) {
    printf("palindrom(\"%s\") => %s\n", str, palindrom(str) ? "true" : "false");
}

int main() {
  testPalindrom("otto");
  testPalindrom("otTO");
  testPalindrom("HELleh");
  testPalindrom("Level");
  testPalindrom("Radar");
  testPalindrom("madam");
  testPalindrom("otto otto");
}

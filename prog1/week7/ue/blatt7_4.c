#include <stdio.h>
#include <string.h>
const char vowels[] = "aeiouAEIOU";

void removeVowels(char str[]) {
    const unsigned long long len = strlen(str);
    char tmp[len];
    int j = 0;
    for (int i = 0; i < len; i++) {
        const char c = str[i];
        if (strchr(vowels, c) == NULL) {
            tmp[j++] = c;
        }
    }
    tmp[j] = '\0';
    strcpy(str, tmp);
}

int main() {
    char str[] = "Hallo";
    char str2[] = "Programmieren";
    char str3[] = "Hll";

    removeVowels(str);
    removeVowels(str2);
    removeVowels(str3);
    printf("%s\n", str);
    printf("%s\n", str2);
    printf("%s\n", str3);
}

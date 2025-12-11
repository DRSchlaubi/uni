#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    FILE *input;
    errno_t err;
    if ((err = fopen_s(&input, "test.txt", "r")) != 0) {
        printf("Datei konnte nicht geoeffnet werden: %s\n", strerror(err));
        return err;
    }

    int count = 0;
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    while (!feof(input)) {
        int tmp;
        const int read = fscanf_s(input, " %c", &tmp);
        if (read >= 0) {
            switch (tmp) {
                case 'a':
                case 'A':
                    a++;
                    break;
                case 'e':
                case 'E':
                    e++;
                    break;
                case 'i':
                case 'I':
                    i++;
                    break;
                case 'o':
                case 'O':
                    o++;
                    break;
                case 'u':
                case 'U':
                    u++;
                    break;
                default:
                    break;
            }
            count++;
        }
    }


    printf("Gesamt: %d\n", count);
    printf("Vokale: %d\n", a + e + i + o + u);
    printf("A: %d, E: %d, I: %d, O:%d, U: %d\n", a, e, i, o, u);
}

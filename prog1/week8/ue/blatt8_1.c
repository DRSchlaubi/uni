#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    FILE *input;
    errno_t err;
    if ((err = fopen_s(&input, "werte.txt", "r")) != 0) {
        printf("Datei konnte nicht geoeffnet werden: %s\n", strerror(err));
        return err;
    }

    int max = INT_MIN;
    bool failed = false;
    while (!feof(input)) {
        int tmp ;
        const int read = fscanf_s(input, "%d", &tmp);
        if (read <= 0) {
            failed = true;
            break;
        }
        if (tmp > max) max = tmp;
    }
    fclose(input);
    if (failed) {
        printf("Fehler beim Lesen der Datei, eventuell enthaelt sie keine Daten (leere Datei) oder ungueltige Daten (nicht numerische Zeichen)");
        return 1;
    }

    FILE *output;
    if ((err = fopen_s(&output, "ergebnis.txt", "w")) != 0) {
        printf("Datei konnte nicht beschrieben werden: %s\n", strerror(err));
        return err;
    }

    fprintf(output, "%d", max);
    fclose(output);
}

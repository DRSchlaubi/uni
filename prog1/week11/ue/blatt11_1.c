#define MAXL 100
#include <stdbool.h>
#include <stdio.h>
#include <sec_api/string_s.h>

enum geschlecht { m = 2, w = 1, d = 0 };

struct kunde {
    unsigned long nummer;
    char name[100];
    short geb_jahr;
    unsigned short geschlecht;
};

int einfuegen(struct kunde kdb[], const int index) {
    unsigned long nummer;
    char name[100];
    short geb_jahr;
    enum geschlecht geschlecht;

    printf("Bitte gebe die Kundennummer ein: ");
    scanf_s("%lu", &nummer);
    printf("Bitte gebe den Namen ein: ");
    scanf_s("%s", name, 100);
    printf("Bitte gebe das Geburtsjahr ein: ");
    scanf_s("%hd", &geb_jahr);
    while (true) {
        printf("Bitte gebe das Geschlecht ein (0 - d, 1 - w, 2 - m): ");
        scanf_s("%d", &geschlecht);
        if (geschlecht > m) {
            printf("Ungueltige Eingabe!\n");
        } else {
            break;
        }
    }

    kdb[index].nummer = nummer;
    kdb[index].geb_jahr = geb_jahr;
    kdb[index].geschlecht = geschlecht;

    strcpy_s(kdb[index].name, sizeof(kdb[index].name), name);

    return index + 1;
}

void anzeigen(struct kunde kdb[], const int index) {
    int idx;
    printf("Anzuzeigender index: ");
    scanf_s("%d", &idx);
    if (idx >= index) {
        printf("An diesem Index existiert kein Kunde!");
        return;
    }
    struct kunde k = kdb[idx];

    printf("Kundennr: %lu\n Name: %s\n Geburtsjahr: %hd\n Geschlecht (0 - d, 1 - w, 2 - m) %hu\n", k.nummer, k.name,
           k.geb_jahr, k.geschlecht);
}


int main() {
    struct kunde kdb[MAXL];
    int current = 0;
    int running = true;

    while (running) {
        printf("<1> Neuen Datensatz anlegen\n");
        printf("<2> Vorhanden Datensatz abrufen\n");
        printf("<0> Ende\n");
        printf("Ihre Wahl: ");

        int selection;
        scanf_s("%d", &selection);
        switch (selection) {
            case 0:
                running = false;
                break;
            case 1:
                if (current >= MAXL) {
                    printf("Datenbank ist voll!\n");
                    break;
                }
                current = einfuegen(kdb, current);
                break;
            case 2:
                anzeigen(kdb, current);
                break;
            default:
                printf("Unbekannte Operation!\n");
        }
    }
}

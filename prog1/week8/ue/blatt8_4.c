#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INVALID_MONTH (-1)

bool streq(const char a[], const char b[]) {
    return strcmp(a, b) == 0;
}

int month_to_number(const char month[]) {
    if (streq(month, "Januar")) return 1;
    if (streq(month, "Februar")) return 2;
    if (streq(month, "Merz") || streq(month, "Maerz")) return 3;
    if (streq(month, "April")) return 4;
    if (streq(month, "Mai")) return 5;
    if (streq(month, "Juni")) return 6;
    if (streq(month, "Juli")) return 7;
    if (streq(month, "August")) return 8;
    if (streq(month, "September")) return 9;
    if (streq(month, "Oktober")) return 10;
    if (streq(month, "November")) return 11;
    if (streq(month, "Dezember")) return 12;
    return INVALID_MONTH;
}

int main(const int argc, char *argv[]) {
    printf("Command: ");
    for (int i = 0; i < argc; i++) {
        printf("%s", argv[i]);
        if (i != argc - 1) printf(" ");
        else printf("\n");
    }

    if (argc != 4) {
        printf("Ungueltige Anzahl von Parametern, bitte <tag> <monat> <jahr> angeben\n");
        return 1;
    }

    const char *day_str = argv[1];
    const char *month_str = argv[2];
    const char *year_str = argv[3];


    const long int day = strtol(day_str, NULL, 10);
    if (day <= 0 || day > 31) {
        printf("Der Tag ist ungueltig!, bitte gebe eine Zahl von 1-31 an\n");
        return 1;
    }
    const long int year = strtol(year_str, NULL, 10);
    if (year == 0) {
        printf("Das Jahr ist ungültig\n");
        return 1;
    }
    const long int month = month_to_number(month_str);
    if (month == INVALID_MONTH) {
        printf("Der Monat ist ungültig. Bitte gebe den deutschen Namen des Monats ein\n");
        return 1;
    }


    if (year >= 2026) {
        printf("Das Datum liegt in der Zukunft!\n");
        return 1;
    }

    printf("%04li-%02li-%02li\n", year, month, day);
    return 0;
}

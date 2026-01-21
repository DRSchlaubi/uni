#define MAX_STRLEN 80
#define NUM_PASSWDS 3
#define MAX_TRIES 3
#include <string.h>
#include <sec_api/stdio_s.h>
// Liste aller gueltigen Passwoerter, global = pfui
char passwd[NUM_PASSWDS][MAX_STRLEN] = {
    "123foo", "bar456", "bla_blubb"
};

int pwAbfrage(char pass[]) {
    for (int i = 0; i < NUM_PASSWDS; i++) {
        if (strcmp(pass, passwd[i]) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int count = 0;

    while (count < MAX_TRIES) {
        char pass[MAX_STRLEN];
        printf("Bitte passwort eingeben (Versucht %d/%d): ", count + 1, MAX_TRIES);
        scanf_s("%s", pass, MAX_STRLEN);

        const int pw_abfrage = pwAbfrage(pass);
        if (pw_abfrage != -1) {
            printf("Passwort (%d) akzeptiert", pw_abfrage);
            return 0;
        }
        count++;
        if (count < MAX_TRIES) {
            printf("Passwort nicht akzeptiert! Versuche es erneut\n");
        }
    }

    printf("Zu viele Fehlversuche");
    return 1;
}

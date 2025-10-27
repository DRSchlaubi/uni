#include <stdio.h>

int main() {
    int input = 124;

    int doubled = input * 2;
    int squared = input * input;
    int module_by_5 = input % 5;

    printf("Doppelt: %u, Quadriert: %u, Rest bei Teilung durch 5: %u", doubled, squared, module_by_5);
    return 0;
}

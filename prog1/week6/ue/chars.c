#include "chars.h"

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

//
// Created by micha on 26.11.2025.
//

#ifndef C_CHARS_H
#define C_CHARS_H
#include <stdbool.h>

/// isDigit - returns whether the specified character is a digit.
/// @param c the character to check
/// @return true if the character is a digit or false if not
bool isDigit(char c);

/// isUpper - returns whether the specified character is an upper-case letter.
/// @param c the character to check
/// @return true if the character is an upper-case letter or false if not
bool isUpper(char c);

/// isLower - returns whether the specified character is a lower-case letter.
/// @param c the character to check
/// @return true if the character is a lower-case letter or false if not
bool isLower(char c);

#endif //C_CHARS_H
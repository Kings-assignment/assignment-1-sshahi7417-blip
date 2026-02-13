// Create an expression that checks if a given character is an uppercase letter.

#include <stdio.h>

int main() {
    char ch = 'G';

    printf("Checking if '%c' is an uppercase letter:\n", ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase letter.\n", ch);
    } else {
        printf("'%c' is NOT an uppercase letter.\n", ch);
    }

    printf("\nChecking if 'g' is an uppercase letter:\n");
    ch = 'g';
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase letter.\n", ch);
    } else {
        printf("'%c' is NOT an uppercase letter.\n", ch);
    }

    return 0;
}
// Write an expression that checks if a number is a multiple of either 3 or 5.

#include <stdio.h>

int main() {
    int num = 15;

    printf("Checking if %d is a multiple of 3 or 5:\n", num);
    if (num % 3 == 0 || num % 5 == 0) {
        printf("%d is a multiple of 3 or 5.\n", num);
    } else {
        printf("%d is NOT a multiple of 3 or 5.\n", num);
    }

    printf("\nChecking if 9 is a multiple of 3 or 5:\n");
    num = 9;
    if (num % 3 == 0 || num % 5 == 0) {
        printf("%d is a multiple of 3 or 5.\n", num);
    } else {
        printf("%d is NOT a multiple of 3 or 5.\n", num);
    }

    printf("\nChecking if 7 is a multiple of 3 or 5:\n");
    num = 7;
    if (num % 3 == 0 || num % 5 == 0) {
        printf("%d is a multiple of 3 or 5.\n", num);
    } else {
        printf("%d is NOT a multiple of 3 or 5.\n", num);
    }

    return 0;
}
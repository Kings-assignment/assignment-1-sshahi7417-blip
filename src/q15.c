// Write an expression that checks if a number is both positive and even.

#include <stdio.h>

int main() {
    int num = 12;

    printf("Checking if %d is both positive and even:\n", num);
    if (num > 0 && num % 2 == 0) {
        printf("%d is both positive and even.\n", num);
    } else {
        printf("%d is NOT both positive and even.\n", num);
    }

    printf("\nChecking if -7 is both positive and even:\n");
    num = -7;
    if (num > 0 && num % 2 == 0) {
        printf("%d is both positive and even.\n", num);
    } else {
        printf("%d is NOT both positive and even.\n", num);
    }

    printf("\nChecking if 15 is both positive and even:\n");
    num = 15;
    if (num > 0 && num % 2 == 0) {
        printf("%d is both positive and even.\n", num);
    } else {
        printf("%d is NOT both positive and even.\n", num);
    }

    return 0;
}
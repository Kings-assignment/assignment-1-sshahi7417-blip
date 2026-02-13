// Given a variable num, write an expression that checks if it is a power of 2.
// You can you math header file for this (eg: #include <math.h>)

#include <stdio.h>

int main() {
    int num = 16;

    printf("Checking if %d is a power of 2:\n", num);
    if (num > 0 && (num & (num - 1)) == 0) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is NOT a power of 2.\n", num);
    }

    printf("\nChecking if 12 is a power of 2:\n");
    num = 12;
    if (num > 0 && (num & (num - 1)) == 0) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is NOT a power of 2.\n", num);
    }

    printf("\nChecking if 32 is a power of 2:\n");
    num = 32;
    if (num > 0 && (num & (num - 1)) == 0) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is NOT a power of 2.\n", num);
    }

    return 0;
}
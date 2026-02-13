// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator).

#include <stdio.h>

int main() {
    int num = 12;

    printf("Checking if %d is divisible by both 2 and 3 (without modulus):\n", num);

    if ((num / 6) * 6 == num) {
        printf("%d is divisible by both 2 and 3.\n", num);
    } else {
        printf("%d is NOT divisible by both 2 and 3.\n", num);
    }

    printf("\nChecking if 10 is divisible by both 2 and 3:\n");
    num = 10;
    if ((num / 6) * 6 == num) {
        printf("%d is divisible by both 2 and 3.\n", num);
    } else {
        printf("%d is NOT divisible by both 2 and 3.\n", num);
    }

    return 0;
}
// Create an expression that checks if a given number is a perfect square.
// You can you math header file for this (eg: #include <math.h>)

#include <stdio.h>
#include <math.h>

int main() {
    int num = 49;
    int integer_sqrt = (int)sqrt(num);

    printf("Checking if %d is a perfect square:\n", num);
    if (integer_sqrt * integer_sqrt == num) {
        printf("%d is a perfect square (sqrt = %d).\n", num, integer_sqrt);
    } else {
        printf("%d is NOT a perfect square.\n", num);
    }

    printf("\nChecking if 50 is a perfect square:\n");
    num = 50;
    integer_sqrt = (int)sqrt(num);
    if (integer_sqrt * integer_sqrt == num) {
        printf("%d is a perfect square (sqrt = %d).\n", num, integer_sqrt);
    } else {
        printf("%d is NOT a perfect square.\n", num);
    }

    printf("\nChecking if 64 is a perfect square:\n");
    num = 64;
    integer_sqrt = (int)sqrt(num);
    if (integer_sqrt * integer_sqrt == num) {
        printf("%d is a perfect square (sqrt = %d).\n", num, integer_sqrt);
    } else {
        printf("%d is NOT a perfect square.\n", num);
    }

    return 0;
}
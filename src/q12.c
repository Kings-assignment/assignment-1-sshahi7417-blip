// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.

#include <stdio.h>

int main() {
    int a = 15, b = 10, c = 5;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    if (a > b && c != 0) {
        printf("Condition is TRUE: a is greater than b AND c is not zero.\n");
    } else {
        printf("Condition is FALSE.\n");
    }

    printf("\nNow changing c to 0...\n");
    c = 0;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    if (a > b && c != 0) {
        printf("This line will not be printed.\n");
    } else {
        printf("Condition is now FALSE because c is zero.\n");
    }

    return 0;
}
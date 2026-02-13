// Write a C expression that performs the following operations in a single line: increment a variable by 1, multiply it by 3, and subtract 10.

#include <stdio.h>

int main() {
    int my_var = 5;
    int result;

    result = ((my_var + 1) * 3) - 10;

    printf("Original variable: %d\n", my_var);
    printf("Result of the expression ((var + 1) * 3) - 10: %d\n",
           result);
    printf("Calculation: ((5 + 1) * 3) - 10 = (6 * 3) - 10 = 18 - 10 = 8\n");

    return 0;
}
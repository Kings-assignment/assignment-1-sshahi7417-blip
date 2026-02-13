// Write a C expression that calculates the sum of the squares of three different numbers.

#include <stdio.h>

int main() {
    int a = 2, b = 3, c = 4;
    int sum_of_squares;

    sum_of_squares = (a * a) + (b * b) + (c * c);

    printf("The sum of squares of %d, %d, and %d is: %d\n", a, b, c, sum_of_squares);
    printf("Calculation: (%d * %d) + (%d * %d) + (%d * %d) = %d + %d + %d = %d\n",
        a, a, b, b, c, c, a*a, b*b, c*c, sum_of_squares);

    return 0;
}
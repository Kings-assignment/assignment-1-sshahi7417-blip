// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
// You can you math header file for this (eg: #include <math.h>)

#include <stdio.h>
#include <math.h>

int main() {
    double a = 10.5, b = 15.5;
    int result;

    result = (int)round(sqrt(a + b));

    printf("a = %.1f, b = %.1f\n", a, b);
    printf("Sum: %.1f\n", a + b);
    printf("Square root of sum: %.3f\n", sqrt(a + b));
    printf("Rounded to nearest integer: %d\n", result);

    return 0;
}
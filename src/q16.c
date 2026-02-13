// Given two variables x and y, write an expression that calculates the average of their values.

#include <stdio.h>

int main() {
    int x = 10, y = 15;
    float average;

    average = (x + y) / 2.0;

    printf("The average of %d and %d is: %.2f\n", x, y, average);

    return 0;
}
// Write a C program to swap the values of two variables using a temporary variable.

#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int temp;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
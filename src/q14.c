// Create an expression that swaps the values of two variables x and y without using a temporary variable.

#include <stdio.h>

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);

    // Swap using XOR
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}
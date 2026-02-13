// Create an expression that swaps the values of three variables x, y, and z in a cyclic order (i.e., x becomes y, y becomes z, and z becomes x).

#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30;
    int temp;

    printf("Before cyclic swap: x=%d, y=%d, z=%d\n", x, y, z);

    temp = z;
    z = y;
    y = x;
    x = temp;

    printf("After cyclic swap:  x=%d, y=%d, z=%d\n", x, y, z);
    printf("(x became y, y became z, z became x)\n");

    return 0;
}
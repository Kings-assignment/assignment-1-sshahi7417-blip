// Given three variables a, b, and c, write an expression that checks if a is equal to b and b is not equal to c.
#include <stdio.h>

#include <stdio.h>

int main() {
    int a = 10, b = 10, c = 5;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    if (a == b && b != c) {
        printf("Condition is TRUE: a equals b, and b does not equal c.\n");
    } else {
        printf("Condition is FALSE.\n");
    }

    printf("\nNow changing c to 10...\n");
    c = 10;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    if (a == b && b != c) {
        printf("This line will not be printed.\n");
    } else {
        printf("Condition is now FALSE because b equals c.\n");
    }

    return 0;
}
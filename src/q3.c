// Write a C program to display a personalized greeting message. (Should contain 'hello' or 'welcome' in the message)

#include <stdio.h>

int main() {
    char name[50];

    printf("please enter your name: ");
    scanf("%49s", name);

    printf("\nHello %s, welcome to the C programming world!\n", name);

    return 0;
}
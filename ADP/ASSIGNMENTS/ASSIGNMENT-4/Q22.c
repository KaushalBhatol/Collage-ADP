/*
 * [x] Write a C program that demonstrates the concept of static variable.
 */

#include <stdio.h>

int func();

int main()
{
    printf("%d\n", func());
    printf("%d\n", func());
    printf("%d\n", func());
    printf("%d\n", func());
    printf("%d\n", func());
    return 0;
}
int func()
{
    static int count = 0;
    count++;
    return count;
}

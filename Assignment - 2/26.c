/*
Write a C program to accept the 2 numbers from the user
and find which one is bigger.
*/
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter two values\n");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        printf("%d is bigger than %d\n", b, a);
    }
    else
    {
        printf("%d is bigger than %d\n", a, b);
    }
}

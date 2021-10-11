/*
 Write a C program to accept the 3 numbers from the user 
 and check which one is bigger.
*/
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter three values\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is bigger than %d and %d\n", a, b, c);
        }
        else
        {
            printf("%d is bigger than %d and %d\n", c, b, a);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is bigger than %d and %d\n", b, c, a);
        }
        else
        {
            printf("%d is bigger than %d and %d\n", c, a, b);
        }
    }
}
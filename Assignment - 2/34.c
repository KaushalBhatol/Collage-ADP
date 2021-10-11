/*
Write a C program to read two numbers and determine the relation 
between them (i.e <,= or >).
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
    else if (b < a)
    {
        printf("%d is bigger than %d\n", a, b);
    }
    else
    {
        printf("%d and %d are same values\n", a, b);
    }
}

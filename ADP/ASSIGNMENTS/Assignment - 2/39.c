/*
Write a C program to print the following digit pyramid

1
1 2
1 2 3
1 2 3 4


https://code4coding.com/c-program-to-pyramid-number-pattern/
*/
#include <stdio.h>
void main()
{
    int i, j, rows = 5;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
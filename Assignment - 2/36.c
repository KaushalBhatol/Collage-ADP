/*

Write a C program to print floyd’s digit pyramid

1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>
void main()
{
    int num = 4, i, j, k = 1;

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %2d", k++);
        }
        printf("\n");
    }
}
/*
Write a C program to print the following pyramid

1
2 2
3 3 3
4 4 4 4

*/
#include <stdio.h>

void main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
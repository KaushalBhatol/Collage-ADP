/*
Write a C program to print the following digit pyramid
         1 
        2 2
       3 3 3 
      4 4 4 4 
*/

#include <stdio.h>
void main()
{
    int i, j, k = 9, m;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf(" ");
        }
        for (m = 1; m <= i; m++)
        {
            printf("%d", i);
            printf(" ");
        }
        printf("\n");

        k = k - 1;
    }
}
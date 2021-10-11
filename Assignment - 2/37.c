/*
Write a C program to print the following pyramid

1
0 1
1 0 1
0 1 0 1
*/

#include <stdio.h>

void main()
{
    int i, j, n, pat = 0;
    n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", pat);
            if (pat == 0)
                pat = 1;
            else
                pat = 0;
        }
        printf("\n");
    }
}
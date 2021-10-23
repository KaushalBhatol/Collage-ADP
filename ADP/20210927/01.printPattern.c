/*
Print pattern
1
21
121
2121
*/
#include <stdio.h>

void main()
{
    int i, j, n, pat=1;
    n = 4;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d", pat);
            if (pat==2)
            pat=1;
            else
            pat=2;
        }
        printf("\n");
    }
}
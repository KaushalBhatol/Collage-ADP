/*
****
***
**
*
*/
#include <stdio.h>

void main()
{
    int i, j, n;
    n = 4;
    for ( i = n; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }        
        printf("\n");
    }
    
}
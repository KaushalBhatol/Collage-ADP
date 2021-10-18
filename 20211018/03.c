/*
additon of two arrays and store that value
on another new array.
*/

#include <stdio.h>
void main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter value of a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
            printf("Enter value of b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d + %d = %d \n", a[i][j], b[i][j], c[i][j]);
        }
    }
}
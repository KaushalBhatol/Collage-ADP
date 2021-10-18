/*
Two dimantional arrays


    a[0][0]=;
    a[0][1]=;
    a[1][0]=;
    a[1][1]=;


*/

#include <stdio.h>

void main()
{
    int a[2][2], i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter value of a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Output: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("a[%d][%d] : %d\n", i, j, a[i][j]);
        }
    }
}
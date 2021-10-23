/*
input from user
row 
colum
sleeping (row) (horizontal) (x)
standig (colum) (vertical) (y)
*/
#include <stdio.h>

void main()
{
    int row, colum;
    printf("enter row and colum value: \n");
    scanf("%d %d", &row, &colum);
    
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= colum; j++)
        {
            printf("1");
        }
        printf("\n");
    }
}
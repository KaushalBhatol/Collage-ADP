/*
 * [x] Write a C program to find the largest and smallest number from any 3X3 matrix.
 */

#include <stdio.h>

void main()
{
    int mat[3][3], i, j, max, min;
    printf("Enter any 3*3 matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);
    }
    max = mat[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (max < mat[i][j])
                max = mat[i][j];

            if (min > mat[i][j])
                min = mat[i][j];
        }
    }
    printf("\nLargest Element = %d,\nsmallest Element = %d", max, min);
}

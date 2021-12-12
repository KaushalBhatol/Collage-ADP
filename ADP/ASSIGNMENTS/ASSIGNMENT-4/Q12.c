/*
 * [x] Write a C Program to check given 3X3 matrix is diagonal matrix or not.
 * [x] Accept the elements from the user.
 */

#include <stdio.h>

int main()
{
    int matrix[3][3];

    // Taking input of the matrix
    int i, j;
    printf("Enter the Matrix Element:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // check except Diagonal elements are 0 or not
    int point = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i != j && matrix[i][j] != 0)
            {
                point = 1;
                break;
            }
        }
    }
    if (point == 1)
        printf("Given Matrix is not a diagonal Matrix.\n");
    else
        printf("Given Matrix is a diagonal Matrix.\n");
}

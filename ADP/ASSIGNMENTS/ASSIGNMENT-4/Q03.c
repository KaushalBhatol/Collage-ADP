/*
 * [x] WAP to calculate addition, subtraction and multiplication on two 5 size 1-D arrays.
 * [ ] Add the result in new array and display the resultant array in a  roper format.
 * [ ] Also find average of both the arrays.
 */
#include <stdio.h>
void main()
{
    int a[2][2], b[2][2], i, j;
    for (i = 0; i < 2; i++) // getting both arrays value from user
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter value of a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
            printf("Enter value of b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("addition of two loop is\n");
    for (i = 0; i < 2; i++) // Printing sum of two arrays
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d + %d = %d \n", a[i][j], b[i][j], a[i][j] + b[i][j]);
        }
    }
    printf("Substracrion of two loop is\n");
    for (i = 0; i < 2; i++) // Printing sum of two arrays
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d - %d = %d \n", a[i][j], b[i][j], a[i][j] - b[i][j]);
        }
    }
    printf("Multiplication of two loop is\n");
    for (i = 0; i < 2; i++) // Printing sum of two arrays
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d * %d = %d \n", a[i][j], b[i][j], a[i][j] * b[i][j]);
        }
    }
    printf("division of two loop is\n");
    for (i = 0; i < 2; i++) // Printing sum of two arrays
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d / %d = %d \n", a[i][j], b[i][j], a[i][j] / b[i][j]);
        }
    }
}
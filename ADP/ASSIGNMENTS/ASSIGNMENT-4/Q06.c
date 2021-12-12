/*
 * [x] WAP to find odd and even numbers from n size 1-D array.
 */

#include <stdio.h>

void main()
{
    int a[100], i, j, n;
index:
    printf("enter 1-D array size: ");
    scanf("%d", &n);

    if (n > 100) // condition for avoid error
    {
        printf("Please insert value less then 100\n");
        goto index;
    }

    printf("enter values on array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Odd Numbers in Array are:\n");
    for (i = 0; i < n; i++) // Check number is odd
    {
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }

    printf("\neven Numbers in Array are:\n");
    for (i = 0; i < n; i++) // Check number is odd
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
}

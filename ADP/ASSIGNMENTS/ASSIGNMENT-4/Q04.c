/*
 * [x] WAP to pick up the largest number and smallest number from 1-d array.
 */

#include <stdio.h>

void main()
{
    int a[10], max_n, min_n, i;
    printf("enter values on array \n");

    for (i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    max_n = a[0];
    min_n = a[0];

    for (i = 0; i < 10; i++)
    {
        // for max num
        if (max_n < a[i])
        {
            max_n = a[i];
        }

        // min num
        if (min_n > a[i])
        {
            min_n = a[i];
        }
    }

    printf("max numer in array is %d\n", max_n);
    printf("min numer in array is %d\n", min_n);
}

/*
 * [x] Write a C Program pass array as argument
 * [x] find minimum and maximum value from array using UDF.
 */

#include <stdio.h>

int sumofarray();

int main()
{
    int a[1000], i, n, sum;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sumofarray(a, n);
}

int sumofarray(int a[], int n)
{
    int min, max, i;
    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }

    printf("minimum of array is : %d \n", min);
    printf("maximum of array is : %d\n", max);
}

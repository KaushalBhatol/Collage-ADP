/*
 * [x] WAP to sort an integer array in ascending and descending order.
 * [x] Accept array elements from the user.
 */

#include <stdio.h>

void main()
{
    int i, j, n, a[100], temp;
    printf("Enter the size of array : \n"); // Taking size of array
    scanf("%d", &n);
    printf("Enter the elements : \n"); // Taking input from user
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) // loop for sorting array in ascending order
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Ascending order of an array : \n"); // print ascending order
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

/*
 * [x] WAP to search the user entered number in 1-D array write its position in array.
 */

#include <stdio.h>

void main()
{
    int a[100], ele, n, i;
index:
    printf("\nEnter no of elements :");
    scanf("%d", &n);

    if (n > 100) // condition for avoid error
    {
        printf("Please insert value less then 100\n");
        goto index;
    }

    printf("\nEnter the values :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Read the element to be searched
    printf("\nEnter the elements to be searched :");
    scanf("%d", &ele);

    // Search starts from the zeroth location
    i = 0;
    while (i < n && ele != a[i])
    {
        i++;
    }

    // If i < n then Match found
    if (i < n)
    {
        printf("nber position = %d", i + 1);
    }
    else
    {
        printf("nber not found");
    }
}

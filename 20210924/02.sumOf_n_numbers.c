/*
     sum of n number
*/

#include <stdio.h>
int main()
{
    int sum = 0, i, n;

    printf("enter value: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
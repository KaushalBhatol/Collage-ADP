#include <stdio.h>

void main()
{
    int i, n, count;
    count = 0;

    printf("enter value ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    
    if (count == 2)
    {
        printf("%d is prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
}
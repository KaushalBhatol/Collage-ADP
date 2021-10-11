/*
first n prime numbers
adn thair sum
*/
#include <stdio.h>
void main()
{
    int i, count = 1, n, sum = 0;
    printf("enter n numbers: ");
    scanf("%d", &n);
    printf("first %d even numbers are:- ", n);
    for (i = 1; count <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            count++;
            sum = sum + i;
        }
    }
    printf("\nAnd their sum is %d\n", sum);
}
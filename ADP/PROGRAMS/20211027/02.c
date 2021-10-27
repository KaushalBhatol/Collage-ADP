/*
-WAP to accept number from the user.
check the number is prime or not.create functon named prime.
*/

#include <stdio.h>
void primeFinder();

void main()
{
    int n;
    printf("enter value\n");
    scanf("%d", &n);
    primeFinder(n);
}

void primeFinder(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("this number is prime number\n");
    }
    else
    {
        printf("this is not a prime number\n");
    }
}
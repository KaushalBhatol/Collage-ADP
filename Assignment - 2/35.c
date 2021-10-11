/*
Q35. Write a C program to print all divisors of a given number. 
E.g. divisors of 50 =1 ,2,5,10,50

http://cprogramming.language-tutorial.com/2012/01/program-to-print-all-divisors-of-given.html
*/

#include <stdio.h>
void main()
{
    int i, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("\nThe divisors are :\n\n");
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
}
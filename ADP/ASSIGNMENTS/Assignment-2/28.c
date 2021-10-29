// Write a C program to print the table of user entered number.

#include <stdio.h>
void main()
{
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }
}
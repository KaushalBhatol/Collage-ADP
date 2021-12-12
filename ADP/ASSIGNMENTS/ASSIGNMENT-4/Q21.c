/*
 * [x] Write a C program to find factorial of given no
 * [x] using recursion.
 */
#include <stdio.h>
int fact(int);
int main()
{
    int n, f;
    printf("Enter the number for calcualte factorial: ");
    scanf("%d", &n);
    f = fact(n);
    printf("factorial of %d is %d\n", n, f);
}
int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
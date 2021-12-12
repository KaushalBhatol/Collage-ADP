/*
 * [x] Write a C Program to find factorial of a given number using UDF.
 */

#include <stdio.h>

long FunctionFactorial();

void main()
{
    int a;
    printf("\n Enter a Number : ");
    scanf("%d", &a);
    printf("\n The Factorial of %d is : %ld\n", a, FunctionFactorial(a));
}

long FunctionFactorial(int b)
{
    int i;
    long f = 1;
    for (i = 1; i <= b; i++)
        f = f * i;
    return (f);
}
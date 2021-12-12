/*
 * [x] Write a C program to check given number is odd or even. Use UDF.
 */

#include <stdio.h>

void CheakOddEven();

void main()
{
    int input;
    printf("enter value for cheak even or odd : ");
    scanf("%d", &input);
    CheakOddEven(input);
}

void CheakOddEven(int a)
{
    if (a % 2 != 0)
    {
        printf("%d is odd\n", a);
    }
    else
    {
        printf("%d is even\n", a);
    }
}
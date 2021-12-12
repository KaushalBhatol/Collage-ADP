/*
 * [x] Write a C Program to find sum of given two integer numbers
 * [x] create user define function (UDF).
 */

#include <stdio.h>

int sum();

void main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Sum of the entered numbers: %d\n", sum(num1, num2));
}

int sum(int a, int b)
{
    return a + b;
}

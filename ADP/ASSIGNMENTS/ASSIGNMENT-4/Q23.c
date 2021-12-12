/*
 * [x] Write a C program that declare three global variable
 * [x] perform this formula (c=a+b).
 * [x] First function (getvalue) gets the value of two variables
 * [x] Second function (sum) perform doing a summation of two variables
 * [x] result of this summation is print in main function.
 */

#include <stdio.h>

void getvalue();
int sum();

int a, b;

void main()
{
    getvalue();
    printf("sum of %d and %d is %d\n", a, b, sum(a, b));
}

void getvalue()
{
    printf("enter value of a: ");
    scanf("%d", &a);
    printf("enter value of b: ");
    scanf("%d", &b);
}

int sum(int a, int b)
{
    return a + b;
}
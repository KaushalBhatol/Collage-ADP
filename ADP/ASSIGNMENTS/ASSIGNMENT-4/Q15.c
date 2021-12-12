/*
 * [x] Write a C Program to exchange the value of two variable
 * [x] using UDF.
 */

#include <stdio.h>

void ValueExchange();

void main()
{
    int a, b;
    printf("enter a & b value\n");
    scanf("%d %d", &a, &b);
    printf("enterd value is a = %d, b = %d\n", a, b);
    ValueExchange(&a, &b);
    printf("after exchanging value\n");
    printf("a = %d, b = %d\n", a, b);
}

void ValueExchange(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
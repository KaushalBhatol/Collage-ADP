/*
    simple return value function
 */
#include <stdio.h>
int add();

void main()
{
    int sum;
    sum = add();
    printf("%d", sum);
}

int add()
{
    int a, b, sum;
    a = 10;
    b = 20;
    sum = a + b;
    return sum;
}
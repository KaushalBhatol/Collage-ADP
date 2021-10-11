/*
Five numbers from users
and print sum
*/

#include <stdio.h>

void main()
{
    int marks[5], sum = 0, i;
    printf("enter 5 numbers \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    printf("sum = %d", sum);
}
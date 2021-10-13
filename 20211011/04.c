/*
-WAP to Create Two 1-D array OF SIZE 4.
and print the addition of all the elements. 
e.g a[1]+b[1]  
*/

#include <stdio.h>

void main()
{
    int a[4], b[4], sum = 0, i;
    for (i = 0; i < 4; i++)
    {
        printf("enter a[%d] value: ", i);
        scanf("%d", &a[i]);
        printf("enter b[%d] value: ", i);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 4; i++)
    {
        sum = a[i] + b[i];
        printf("%d + %d = %d \n", a[i], b[i], sum);
    }
}
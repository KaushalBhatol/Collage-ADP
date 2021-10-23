/*
    -Write a C program to get two arrays from user
    and MERGE into third array.use 1-D array.
*/

#include <stdio.h>
void main()
{
    int i, a[5], b[5], c[10], cnt = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }

    for (i = 0; i < 5; i++)
    {
        c[cnt] = a[i];
        cnt++;
    }
    for (i = 0; i < 5; i++)
    {
        c[cnt] = b[i];
        cnt++;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }
}
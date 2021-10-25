/*
    -Write a C program to get two arrays from user
    and MERGE into third array.use 1-D array.
*/

/*
    -Write a C program to get two arrays from user
    and MERGE into third array.use 1-D array.
*/

#include <stdio.h>
void main()
{
    int a[5], b[5], c[10], i, cnt = 0;

    for (i = 0; i < 5; i++)
    {
        printf("enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("enter b[%d] = ", i);
        scanf("%d", &b[i]);
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
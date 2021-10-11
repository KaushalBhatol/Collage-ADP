#include <stdio.h>

void main()
{
    int marks[5];
    marks[0] = 44;
    marks[1] = 24;
    marks[2] = 34;
    marks[3] = 54;
    marks[4] = 64;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }
}
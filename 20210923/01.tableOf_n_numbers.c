/*
 Table of n number
*/

#include <stdio.h>
void main()
{
    int input;
    printf("Enter value:");
    scanf("%d", &input);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", input, i, input * i);
    }
}
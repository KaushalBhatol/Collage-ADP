/* 
-WAP to print odd numbers from 1 to 10.
and even numbers from 11 to 20.
*/

#include <stdio.h>

void main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even\n", i);
        }
    }
    for (i = 11 ; i <= 20; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d is odd\n", i);
        }
    }
}
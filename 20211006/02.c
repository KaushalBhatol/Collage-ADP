/*
    print 1 to 100
    condition skip 5, 15,
*/
#include <stdio.h>

void main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
}
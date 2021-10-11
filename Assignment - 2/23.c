#include <stdio.h>
void main()
{
    int i = 1, n = 20, p = 2, count, flag;
    printf("First %d prime numbers are \n", n);

    while (i <= n)
    {
        flag = 1;
        for (count = 2; count <= p - 1; count++)
        {
            if (p % count == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", p);
            i++;
        }
        p++;
    }
}
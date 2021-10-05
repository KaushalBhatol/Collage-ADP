// finding bigger value from three inputs

/*
    1) a>b
        conditon a>c
            a is bigger
            c is bigger
    2) else // b>a
        condion b>c
            b is bigger
            c is bigger
*/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three values \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is bigger then %d and %d\n", a, c, b);
        }
        else
        {
            printf("%d is bigger then %d and %d\n", c, a, b);
        }
    }
    else // b >  a
    {
        if (b > c)
        {
            printf("%d is bigger then %d and %d\n", b, c, a);
        }
        else
        {
            printf("%d is bigger then %d and %d\n", c, a, b);
        }

    }

    return 0;
}

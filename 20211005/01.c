#include <stdio.h>
int pyramid();
int revPyramid();

void main()
{
    int choice, n;
top:
    printf("press 1: pyramid\npress 2: reverce pyramid\npress 3: square\npress 4: exit\n\n\t Your choice: ");
    scanf("%d", &choice);

    printf("\n\tenter value: ");
    scanf("%d", &n);
    switch (choice)
    {
    case 1:
        pyramid(n);
        goto top;
        break;

    case 2:
        revPyramid(n);
        goto top;
        break;

    default:
        break;

        goto top;
    }
}

int pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int revPyramid(int n)
{
    for (int i = n; 1 <= i; i++)
    {
        printf("* \n");
    }
    
}

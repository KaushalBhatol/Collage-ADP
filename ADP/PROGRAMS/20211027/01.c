/*
 with argument without return type
-WAP to accept number from the user.
check its odd or even.create function odd_even.
*/
#include <stdio.h>
void finder();

void main()
{
    int i, value;
    printf("enter value: ");
    scanf("%d", &value);
    finder(value);
}

void finder(int a)
{
    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }
}
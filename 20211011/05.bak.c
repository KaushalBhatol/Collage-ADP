/*
two arrays

switch case 
all arthamatic operators

 5 for exit
 other for invalid
*/

#include <stdio.h>

int main()
{
    int a[4], b[4], choice, i;
up:
    printf(" 1 for add those number\n 2 for multiply\n 3 for subtraction\n 4 for division. \n 5 for exit \n");
    printf(" SELECT YOUR CHOICE : ");
    scanf("%d", &choice);

    for (i = 0; i < 4; i++)
    {
        printf("enter a[%d] vlaue: ", i);
        scanf("%d", &a[i]);
        printf("enter b[%d] vlaue: ", i);
        scanf("%d", &b[i]);
    }

    switch (choice)
    {

    case 1:

        printf("sum of numbers: \n");
        for (i = 0; i < 4; i++)
        {
            printf("%d + %d = %d \n", a[i], b[i], a[i] + b[i]);
        }
        break;

    case 2:
    {
        printf("multiply of numbers: \n");
        for (i = 0; i < 4; i++)
        {
            printf("%d x %d = %d \n", a[i], b[i], a[i] * b[i]);
        }
    }
    case 3
    {
        printf("Substraction of numbers: \n");
        for (i = 0; i < 4; i++)
        {
            printf("%d - %d = %d \n", a[i], b[i], a[i] - b[i]);
        }
    }
    case 4
    {
        printf("Divison of numbers: \n");
        for (i = 0; i < 4; i++)
        {
            printf("%d / %d = %d \n", a[i], b[i], a[i] / b[i]);
        }
    }
    default
    {
        printf("Please enter valid option\n");
    }

    return 0;
}
/*
two arrays
switch case
all arthamatic operators

 5 for exit
 other for invalid
*/

#include <stdio.h>

void main()
{
    int a[4], b[4], choice, i;
Index:
    printf(" 1 for addition\n 2 for substractiion\n 3 for multiply\n 4 for divison\n 5 for exit\n");
    scanf("%d", &choice);

    if (choice == 5)
    {
        goto end;
    }

    for (i = 0; i < 4; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    switch (choice)
    {
    case 1:
        printf("addition of two numbers is: ");
        for (i = 0; i < 4; i++)
        {
            printf("%d + %d = %d \n", a[i], b[i], a[i] + b[i]);
        }
        break;

    case 2:
        printf("Substraction of two numbers is: ");
        for (i = 0; i < 4; i++)
        {
            printf("%d - %d = %d \n", a[i], b[i], a[i] - b[i]);
        }
        break;

    case 3:
        printf("multiplication of two numbers is: ");
        for (i = 0; i < 4; i++)
        {
            printf("%d * %d = %d \n", a[i], b[i], a[i] * b[i]);
        }
        break;

    case 4:
        printf("Substraction of two numbers is: ");
        for (i = 0; i < 4; i++)
        {
            printf("%d / %d = %d \n", a[i], b[i], a[i] / b[i]);
        }
        break;

    default:
        printf("please enter valid value\n");
        goto Index;
        break;
    }
end:
    printf("thanks \n");
}
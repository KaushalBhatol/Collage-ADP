/*
WAP to accept 2 numbers from the user. 
if user press 
A for add those number. 
M for multiply ,
s for subtraction, 
d for division. 
*/
#include <stdio.h>

void main()
{

    char choice;
    int x, y;

    printf(" a for add those number\n m for multiply\n s for subtraction\n d for division\n");
    scanf("%c", &choice);

    printf("enter x and y value\n");
    scanf("%d %d", &x, &y);

    switch (choice)
    {
    case 'a':
        printf("%d + %d = %d \n", x, y, x + y);
        break;

    case 'm':
        printf("%d * %d = %d \n", x, y, x * y);
        break;

    case 's':
        printf("%d - %d = %d \n", x, y, x - y);
        break;

    case 'd':
        printf("%d / %d = %d \n", x, y, x / y);
        break;

    default:
        printf("Please enter valid choice\n");
        break;
    }
}

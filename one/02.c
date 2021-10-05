/*
WAP to accept 2 numbers from the user. 
if user press 
A for add those number. 
M for multiply ,
s for subtraction, 
d for division. 
*/

#include <stdio.h>

int main()
{
    float num1, num2;
    char adding, multiply, substrction, division, choice;
    adding = 'a';
    multiply = 'm';
    substrction = 's';
    division = 'd';

    printf("a for add those number\n M for multiply\n s for subtraction\n d for division. \n");
    printf(" SELECT YOUR CHOICE : ");
    scanf("%c", &choice);

    printf("Enter two values\n");
    scanf("%f %f", &num1, &num2);
    printf("You enterd x= %.2f and y= %.2f\n", num1, num2);

    if (choice == adding)
    {
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    }
    else if (choice == multiply)
    {
        printf("%.2f x %.2f = %.2f\n", num1, num2, num1 * num2);
    }
    else if (choice == substrction)
    {
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    }
    else if (choice == division)
    {
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    }
    else
    {
        printf("Please enter valid option\n");
    }

    return 0;
}

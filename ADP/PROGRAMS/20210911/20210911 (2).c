/*
WAP to accept 2 numbers from the user. 
if user press A then add those number. 
M then multiply ,
s for subtraction, 
d for division. 
*/

#include<stdio.h>

int main()
{
    float a, b;
    char choice, addition, multiplication, subtraction, divison;
    addition = 'A';
    multiplication = 'M';
    subtraction = 'S';
    divison = 'D';

    printf(" A for sum those number. \n M for multiply\n S for subtraction\n D for division\n");
    printf("Select your choice: ");
    scanf("%c", &choice);
    
    printf("\nEnter A and B value:\n");
    scanf("%f %f", &a, &b);
    printf("Entered value is %.2f and %.2f\n", a, b);

    if (choice == addition)
    {
        printf("%.2f + %.2f = %.2f\n", a, b, a+b);
    }
    else if (choice == multiplication)
    {
        printf("%.2f x %.2f = %.2f\n", a, b, a*b);
    }
    else if (choice == subtraction)
    {
        printf("%.2f - %.2f = %.2f\n", a, b, a-b);
    }
    else if (choice == divison)
    {
        printf("%.2f / %.2f = %.2f\n", a, b, a/b);
    }
    else
    {
        printf("\n Please Enter Capital latters or valid value \n\n");
    }
    return 0;
}

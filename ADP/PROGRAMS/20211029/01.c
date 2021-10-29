/*
-WAP te user create menu for the user.
1)Arithmetic operation
2)Square and square root. must be return
 */
#include <stdio.h>
#include <math.h>
int userInput();
void arth();
void squre();
float sqr_t();

void main()
{
    int choice, x;
    printf("select your choice\n 1 for Arthamatic opration\n 2 for Square \n 3 for square root\n");
    choice = userInput();
    switch (choice)
    {
    case 1:
        arth();
        break;

    case 2:
        x = userInput();
        squre(x);
        break;

    case 3:
        sqr_t();
        break;

    default:
        break;
    }
}

int userInput()
{
    int output;
    printf("enter value: ");
    scanf("%d", &output);
    return output;
}

void arth()
{
    int a, b;
    printf("enter a and b values\n");
    a = userInput();
    b = userInput();
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
}

void squre(int x)
{
    printf("square of %d = %d\n", x, x * x);
}

float sqr_t()
{
    int x = userInput();
    printf("square root of %d = %lf\n", x, sqrt(x));
    return 0;
}
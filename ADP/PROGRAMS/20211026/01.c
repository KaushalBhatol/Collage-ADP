/*

*/

#include <stdio.h>
void additon(int, int);
void substraction(int, int);
void mult(int, int);
void div(int, int);

void main()
{
    int choice, a, b;
    printf("press 1 for additon\n2 for subtaction\n3 for multiplicateion \n4 for divison\n");
    scanf("%d", &choice);
    printf("enter a value = ");
    scanf("%d", &a);
    printf("enter b value = ");
    scanf("%d", &b);
    switch (choice)
    {
    case 1:
        additon(a, b);
        break;

    case 2:
        substraction(a, b);
        break;

    case 3:
        mult(a, b);
        break;

    case 4:
        div(a, b);
        break;

    default:
        printf("enter valid value\n");
        break;
    }
}

void additon(int a, int b)
{
    int sum = a + b;
    printf("%d + %d = %d", a, b, sum);
}
void substraction(int a, int b)
{
    int sub = a - b;
    printf("%d - %d = %d", a, b, sub);
}
void mult(int a, int b)
{
    int mult = a * b;
    printf("%d * %d = %d", a, b, mult);
}
void div(int a, int b)
{
    float div = a / b;
    printf("%d / %d = %.2f", a, b, div);
}
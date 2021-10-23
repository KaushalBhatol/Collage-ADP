// ALGORITHM:
// START
// Step 1 → Take three integer variables, say A, B & C
// Step 2 → Assign values to variables
// Step 3 → If A is greater than B & C, Display A is largest value
// Step 4 → If B is greater than A & C, Display B is largest value
// Step 5 → If C is greater than A & B, Display A is largest value
// Step 6 → Otherwise, Display A, B & C are not unique values
// STOP

#include <stdio.h>

int main()
{
    int a, b, c;

    printf(" enter a, b and c value\n");
    scanf("%d %d %d", &a, &b, &c);

    printf(" a = %d, b = %d, c = %d \n", a, b, c);

    if (a > b)
    {
        if (a > c)
        {
            printf(" a is largest number\n");
        }
        else
        {
            printf("c is bigger number\n");
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf(" b is largest number\n");
        }
        else
        {
            printf("c is bigger number\n");
        }
    }
    else
    {
        printf(" a and b are equal values\n");
    }

    return 0;
}

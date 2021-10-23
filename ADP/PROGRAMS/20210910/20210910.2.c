/*
********************************************
  NAME:     IF STETMENT PRACTICE
  PURPOSE:  COMPARING THREE VALUES
  AUTHOR:   KAUSHAL BHATOL
  DATE:     2021/08/10
********************************************

    ALGORITHM:
    START
    Step 1 → Take three integer variables, say A, B& C
    Step 2 → Assign values to variables
    Step 3 → If A is greater than B & C, Display A is largest value
    Step 4 → If B is greater than A & C, Display B is largest value
    Step 5 → If C is greater than A & B, Display A is largest value
    Step 6 → Otherwise, Display A, B & C are not unique values
    STOP
STOP

*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three values A, B and C\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("A = %d, B = %d, C = %d\n \n", a, b, c);
    
    if (a > b)
    {
        if (a > c)
        {
            printf(" %d is larger then %d and %d \n", a, b, c);
        }
        else
        {
            printf(" %d is larger then %d and %d \n", c, b, a);
        }
    }
    else if (b > a)
    {
        if (b>c)
        {
            printf(" %d is larger then %d and %d \n", b, c, a);
        }
        else
        {
            printf(" %d is larger then %d and %d \n", c, b, a);
        }        
    }
    else if (c>b || c<b)
    {
        if (c>b)
        {
            printf(" %d is larger then %d and %d \n", c, b, a);
        }
        else
        {
            printf(" %d and %d are same and larger then %d \n", a, b, c);
        }
    }
    else
    {
        printf(" %d , %d and %d are same value \n", a, b, c);
    }
    return 0;
}

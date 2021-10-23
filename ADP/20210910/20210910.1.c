/*
********************************************
  NAME:     IF STETMENT PRACTICE
  PURPOSE:  COMPARING TWO VALUES
  AUTHOR:   KAUSHAL BHATOL
  DATE:     2021/08/10
********************************************

	ALGORITHM:
    START
    Step 1 → Take TWO integer variables, say A & B
    Step 2 → Assign values to variables
    Step 3 → If A is greater than B , Display A is largest value
    Step 4 → If B is greater than A, Display B is largest value
    Step 5 → Otherwise, Display A & B are not unique values
    STOP
*/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter three values of A and B\n");
    scanf("%d %d", &a, &b);
    printf("A = %d, B = %d\n \n", a, b);
    
    if(a > b)
    {
        printf("%d is greater then %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d is greater then %d\n", b, a);
    }
    else
    {
        // this means b > a
        printf("%d and %d are equal\n", a, b);
    }

    return 0;
}

/*
accept five numbers
print those element on to the screen
multiplication
*/

/*
-WAP to Accept 5no.s from the user and display
 multiplication of those numbers.(Note: Use Array)
*/

#include <stdio.h>

void main()
{
    int input[5], mult = 1, i;
    printf("enter 5 numbers \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &input[i]);
        mult *= input[i];
    }
    printf("inputs are: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", input[i]);
    }
    printf("\nmultiplication = %d", mult);
}
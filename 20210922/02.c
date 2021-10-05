/*
table of user enter number 
if nuber is > 10 then print table

else nuber is below 10

*/

#include <stdio.h>
void main()
{
    int input;
    printf("Enter value:");
    scanf("%d", &input);

    if (input > 10)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", input, i, input * i);
        }
    }

}
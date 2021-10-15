/*
WAP to accept 5 subjects marks from the user. 
calculate total and percentage.
Display marks, total and per. 
*/

#include <stdio.h>
void main()
{
    int marks[5], i, total = 0;
    float percentage;

    for (i = 0; i < 5; i++)
    {
        printf("enter marks : \n");
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    printf(" Entered marks are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }

    percentage = (total / 500.0) * 100;

    printf("\n total marks = %d, persantage = %.2f\n", total, percentage);
}
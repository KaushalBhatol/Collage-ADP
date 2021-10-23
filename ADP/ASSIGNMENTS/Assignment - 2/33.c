/*

 Write a C program to check given year is leap year or not.

https://www.programiz.com/c-programming/examples/leap-year
*/
#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
}
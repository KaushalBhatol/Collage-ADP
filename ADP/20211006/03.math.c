/*
     math. h library

     ceil(number) = rounds up the given number, It returns the integer value
     which is greater than or equal to given number.

    floor(number) = rounds down the given number. It returns the integer value
    which is less than or equal to given number.

    sqrt(number) = return the square root of given number.

    pow(base, exponenet) = return the power of given number.

    abs(number) = return the absolute value of given number.
*/
#include <stdio.h>
#include <math.h>

void main()
{
    float number;
    number = 44.55;
    printf("celi    = %lf \n", ceil(number));
    printf("floor   = %lf \n", floor(number));
    printf("sqrt    = %lf \n", sqrt(number));
    printf("pow     = %lf \n", pow(number, 2));
}
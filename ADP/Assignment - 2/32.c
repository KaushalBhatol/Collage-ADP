/*
Write a C program to input the sides of triangle 
and determine whether it is right angle or not.

https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/c-programming-basic-exercises-134.php

*/

#include <stdio.h>
void main()
{
    int x, y, z;

    printf("Input the three sides of a trainagel:\n");

    scanf("%d %d %d", &x, &y, &z);

    if ((x * x) + (y * y) == (z * z) || (x * x) + (z * z) == (y * y) || (y * y) + (z * z) == (x * x))
    {
        printf("It is a right angle triangle!\n");
    }
    else
    {
        printf("It is not a right angle triangle!\n");
    }
}

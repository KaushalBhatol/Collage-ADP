/*
Write a C program to display volume of cylinder using the formula pi*r2*h.
*/
#include <stdio.h>
int main()
{
    int height, radius;
    const float PI = 3.14;

    printf("enter value of hight and radius\n");
    scanf("%d %d", &height, &radius);

    double volume = PI * (radius * radius) * height;
    printf("Volume of the cylinder=%f", volume);
}
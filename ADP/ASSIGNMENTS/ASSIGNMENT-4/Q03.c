/*
 * [x] WAP to calculate addition, subtraction and multiplication on two 5 size 1-D arrays.
 * [x] Add the result in new array and display the resultant array in a  roper format.
 * [x] Also find average of both the arrays.
 */
#include <stdio.h>
void main()
{
    int a[5], b[5], c[5], sum = 0, avg, i;

    printf("enter a and b array values\n");
    for (i = 0; i < 5; i++)
    {
        printf("a[%d] :", i);
        scanf("%d", &a[i]);
        printf("b[%d] :", i);
        scanf("%d", &b[i]);
    }

    // addition
    printf("\nadditon of two array: \n");
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d + %d = %d\n", a[i], b[i], c[i]);
    }

    // substraction
    printf("\nsubstraction of two array: \n");
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] - b[i];
        printf("%d - %d = %d\n", a[i], b[i], c[i]);
    }

    // multiplication
    printf("\nMultplication of two array: \n");
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] * b[i];
        printf("%d * %d = %d\n", a[i], b[i], c[i]);
    }

    // avg og array 1
    for (i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    avg = sum / 5;
    printf("\narray one avg is %d\n", avg);
    // avg og array 2
    for (i = 0; i < 5; i++)
    {
        sum += b[i];
    }
    avg = sum / 5;
    printf("array two avg is %d\n", avg);
}
/* FUNCTION */
#include <stdio.h>
void multp(); // declarination

void main()
{
    multp(); // call
}

void multp() // defination
{
    int a, b, mult;
    printf("enyter a and b value\n");
    scanf("%d %d", &a, &b);
    mult = a * b;
    printf(" %d * %d = %d\n", a, b, mult);
}
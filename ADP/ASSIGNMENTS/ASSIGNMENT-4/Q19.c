/*
 * [] Write a C program that demonstrate concept of NESTING FUNCTION.
 * [] Use following formula ans=a/(b-c)
 */

#include <stdio.h>

int function1();
int function2();

void main()
{
    int a, b, c;
    printf("ans = a/(b-c)\n Please enter a, b and c value\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d = %d/(%d-%d)\n", function2(a, b, c), a, b, c);
}

int function1(int b, int c)
{
    return b - c;
}

int function2(int a, int b, int c)
{
    int ans;
    ans = a / function1(b, c);
    return ans;
}
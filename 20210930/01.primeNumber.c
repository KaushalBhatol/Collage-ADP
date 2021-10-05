/*
What is?
    Number which is having two factors is called prime number

How To?
    if n = 7
    we cheack 1 to n; --> loop
    if for any i is fector for n, 
    --> incrasing count by 1.
    if count value == 2, this no is prime no.
    else this is not a prime no

*/
#include <stdio.h>

void main()
{
    int n, count = 0;
    printf("enter value\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("this number is prime number\n");
    }
    else
    {
        printf("this is not a prime number\n");
    }
}

/* WAP to Print n "*" horizontally(x)and vertically(y)
accept n from user
*/
#include <stdio.h>

void main()
{
    int n, i;
    printf("enter value: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
        printf("*");    // horizontal
    for (i = 0; i <= n; i++)
        printf("*\n"); // vertical
}
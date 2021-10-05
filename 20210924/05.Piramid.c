/* 
    print 1, Piramid style
*/

#include <stdio.h>
void main()
{
    int n;
    printf("enter value: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
}
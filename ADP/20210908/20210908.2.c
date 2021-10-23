#include <stdio.h>

int main()
{
    // comparing three values 
    int a, b, c, d;

    printf("Enter the value of a and b \n");
    scanf("%d %d %d", &a, &b, &c);

    d =(a>b)?(a>c?a:c):(b>c?b:c); // (conditon)?true:false;
    
    printf("%d is bigger \n", c);
    return 0;
}

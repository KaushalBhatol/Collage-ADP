// finding square root of user input

#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);
    double root;
    root = sqrt(a);

    printf("%.2lf is square root of %d\n", root, a);

    return 0;
}


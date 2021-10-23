#include<stdio.h>

int main()
{
    int a, input;
    a = 1;
    printf("Input value: ");
    scanf("%d", &input);

    repeat:
        printf("%d x %d = %d\n", input, a, input*a);
        a++;
        if(a<11){
            goto repeat;
        }
    return 0;
}

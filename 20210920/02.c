/* accept nuber from the user
and print the stars that many times
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, input;
    a = 0;

    printf("How much times: ");
    scanf("%d", &input);

    repeat:
        printf("*\n");
        a++;
        if(a == input)
            exit(0);
    goto repeat;
    return 0;
}

/* 

write a program to accept number from the user and print
the square of all the numbers from 1 to thet numbers"

*/
#include <stdio.h>

void main()
{
    int input, i = 1;
    printf(" Enter value: ");
    scanf("%d", &input);

    up:
        printf("%d square is %d\n", i, i*i);
        i++;
        if (input >= i)
        {
            goto up;
        }
        
}

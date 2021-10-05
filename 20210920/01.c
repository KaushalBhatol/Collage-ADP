

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    i = 0;
    repeat:
    printf("Kaushal Chaudhary\n");
    i++;
    if(i>10){
        exit(0);
    }
    goto repeat;
    return 0;
}


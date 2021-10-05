/*
*/

#include<stdio.h>

void main()
{
    int i, count = 0;
    for ( i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if( j % i == 0)
                count++;
        }
        if (count == 2)
        {
            printf("%d is prime \n", i);
        }
        else
            printf("%d is not prime \n", i);
        
        count = 0;       
    }
    
}
/* WAP to accept accept number from the user. 
if number is 0 then print u can not enter 0. 
if the number is between 1 to 10 .find the square of the number. 
if the number is b/w 11 to 20 find its odd or even. 
if the number is above 20 or number is divisible by 2 then find sqrt of that of number..

*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    double square_root = sqrt(num);

    if(num == 0)
    {
        printf("You can not enter 0\n");
    }
    else if(num >= 1 && num <= 10)
    {
        printf("%d is square of %d\n", num*num, num);
    }
    else if(num > 10 && num <= 20)
    {
        if(num%2 == 0)
        {
            printf("%d is even\n", num);
        }
        else
        {
            printf("%d is odd\n", num);
        }
    }
    else if (num > 20 || num%2==0)
    {
        printf("%lf is square root of %d\n", square_root, num);
    }
    else
    {
        printf("Enter the valid value\n");
    }
    
    return 0;
}

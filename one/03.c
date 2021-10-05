/*
WAP to perform following operations as per the user selcetion. 
1- for calculate simple interest, // i=p*r*n/1000
2- for calculate area of circle, // Pl*r*r
3- for calculate conversion of temp. i.e.F. to C. 
4- for calculate user's age in years.
5 - for exit else not exit

write a program to perform followeig oprations

1>
2> area of circle
3> calcualte convortion of temprature f to c
4> clculate users age in years

*/

#include<stdio.h>


int main()
{
    int choice, p, r, n;
    float f;
    menu:
        printf("Select your choice\n 1- for calculate simple interest\n 2- for calculate area of circle\n 3- for calculate conversion of temp\n 4- for calculate user's age in years.\n 5 - for exit \n select your choice: ");
        switch (choice)
        {
        case 1:
            printf("enter p, r and n value\n");
            scanf("%d %d %d", &p, &r, &n);
            printf("simple intrest is I= (%d*%d*%d)/100 = %d", p, r, n, (p*r*n)/100);
            goto menu;
            break;

        case 2:
            printf("enter r value\n");
            scanf("%d", &r);
            printf("area of circle = PI x %d x %d = %.2f\n", r, r, 3.14*r*r);
            goto menu;
            break;
        
        case 3:
            printf("enter Farenhit value: ");
            scanf("%f", f);
            printf(" %f F = %f C\n", f, (f-32)*5/9);
            goto menu;
        
        case 4:
            printf("Enter you birth year\n");
            scanf("%d", &r);
            printf(" You are %d year's old\n", 2020-r);
            goto menu;
        
        case 5:
            exit(0);
            goto menu;
        default:
            break;
        }
    exit:
        return 0;
}

/*
    -WAP to accept student name,roll no,5 subjects marks .
    calculate total and percentage.display all the information.
 */
#include <stdio.h>
void main()
{
    int i, rnum, smarks[5], total = 0;
    float percentage;
    char name[10];
    printf("Enter your Name: ");
    scanf("%s", &name);
    printf("Enter Roll No. ");
    scanf("%d", &rnum);
    printf("Enter your 5 subject marsk: \n");
    for (i = 0; i < 5; i++)
    {
        printf("marks of subject %d = ", i + 1);
        scanf("%d", &smarks[i]);
    }
    // output
    printf("\n\n Name = %s \t no. = %d \n", name, rnum);
    for (i = 0; i < 5; i++)
    {
        printf("subject %d marks is = %d \n", i + 1, smarks[i]);
        total += smarks[i];
    }
    percentage = (total / 500.0) * 100;
    printf("total = %d \t percentage = %.2f", total, percentage);
}
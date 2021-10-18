/*
-WAP to accept Employees details from the user for
id, name , net salary.
display the information.
*/
#include <stdio.h>

void main()
{
    int id, salary;
    char name[10];

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("enter your id and selary\n");
    scanf("%d %d", &id, &salary);
    printf(" Name = %s \n id = %d and salary = %d \n", name, id, salary);
}
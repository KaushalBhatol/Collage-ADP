/*
 * [x] Write a C program to create structure employee
 * [x] which have data member eid, ename, designation, basic_salary.
 * [x] You have to calculate hra(2% of basic_salary)
 * [x] ta(3% of basic_salary)
 * [x] pf(10% of basic_salary) and
 * [x] display all the information.
 */

#include <stdio.h>
float Ehra(float);
float Eta(float);
float Epf(float);

struct employ
{
    int id, dasignation;
    float basic_salary, hra, ta, pf;
    char name[30];
};

void main()
{
    int i, n;
    printf("how much employs: ");
    scanf("%d", &n);

    struct employ e[n];
    // input from usr
    for (i = 0; i < n; i++)
    {
        printf("\n\nEnter employ %d information\n", i + 1);
        printf("name: ");
        scanf("%s", e[i].name);
        printf("id : ");
        scanf("%d", &e[i].id);
        printf("Dasgination : ");
        scanf("%d", &e[i].dasignation);
        printf("Basic Sallary : ");
        scanf("%f", &e[i].basic_salary);
        e[i].hra = Ehra(e[i].basic_salary);
        e[i].ta = Eta(e[i].basic_salary);
        e[i].pf = Epf(e[i].basic_salary);
    }
    // displaying output
    for (i = 0; i < n; i++)
    {
        printf("\n\nEmploy %d information: \n", i + 1);
        printf("Name: %s", e[i].name);
        printf("\tId  : %d", e[i].id);
        printf("\nDasgination : %d", e[i].dasignation);
        printf("\tBasic Sallary : %.2f", e[i].basic_salary);
        printf("\nhra = %.2f", e[i].hra);
        printf("\tta = %.2f", e[i].ta);
        printf("\tpf = %.2f\n", e[i].pf);
    }
}

float Ehra(float salary)
{
    return salary * (2 / 100.00);
}

float Eta(float salary)
{
    return salary * (03 / 100.00);
}

float Epf(float salary)
{
    return salary * (10 / 100.00);
}
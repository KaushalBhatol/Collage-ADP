/*
 * [x] Write a C program to create structure employee
 * [x] which have data member eid,ename, designation, basic_balary.
 * [x] calculate hra(2% of basic_salary),ta(3% of basic_salary), pf(10% of basic_salary)
 * [x] create three functions (getdata(),calculate(),putdata())
 * [x] calculate net_salary and print the employee information respectively.
 */

#include <stdio.h>

int n;

float Ehra(float);
float Eta(float);
float Epf(float);
float netSalary(float, float, float, float);
void getdata();
void calculate();
void putdata();

struct employ
{
    int id, dasignation;
    float basic_salary, net_salary, hra, ta, pf;
    char name[30];
} e[20];

void main()
{
    getdata();
    calculate();
    putdata();
}

void getdata()
{
    printf("how much employs: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
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
    }
}

void calculate()
{
    for (int i = 0; i < n; i++)
    {
        e[i].hra = Ehra(e[i].basic_salary);
        e[i].ta = Eta(e[i].basic_salary);
        e[i].pf = Epf(e[i].basic_salary);
        e[i].net_salary = netSalary(e[i].basic_salary, e[i].hra, e[i].ta, e[i].pf);
    }
}

void putdata()
{
    for (int i = 0; i < n; i++)
    {
        printf("\n\nEmploy %d information\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("Id  : %d", e[i].id);
        printf("\tDasgination : %d", e[i].dasignation);
        printf("\nBasic Salary : %2.f", e[i].basic_salary);
        printf("\tNet Salary : %.2f", e[i].net_salary);
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

float netSalary(float salary, float hra, float ta, float pf)
{
    // net_salary = basic_salry + hra + ta - pf
    return salary + hra + ta - pf;
}
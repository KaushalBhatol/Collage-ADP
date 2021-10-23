/*
-WAP to create a structure of employee .
accept emp id, name, department, designation  , gross salary, TA,DA,TDS.
Calculate his or her net salary.

net_salary = ta + da - tds;

 */
#include <stdio.h>
struct employ
{
    int id;
    char name[10];
    float ta, da, tds, gross_salary, net_salary;
} e1;

void main()
{
}
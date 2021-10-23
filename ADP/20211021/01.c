/*
WAP to create a structure for student.
 accept his or her roll no, name, age from the user and display it.
*/
#include <stdio.h>
struct student
{
    char name[10];
    int age, rollno;
} s1;

void main()
{
    printf("enter Your Name: ");
    scanf("%s", &s1.name);
    printf("enter your roll no and age\n");
    scanf("%d %d", &s1.rollno, &s1.age);

    printf(" Name: %s\n roll no: %d\n age: %d\n", s1.name, s1.rollno, s1.age);
}
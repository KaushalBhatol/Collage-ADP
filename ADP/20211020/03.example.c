/*
    -Example of Structure.
*/
#include <stdio.h>

struct Student
{
    int rollno;
} s2;

void main()
{
    struct Student s1;
    printf("enter Your Roll no = ");
    scanf("%d", &s1.rollno);
    printf("Roll no is = %d\n", s1.rollno);
    printf("Student 2 enter Your Roll no = ");
    scanf("%d", &s2.rollno);
    printf("Roll no is = %d\n", s2.rollno);
}
/*
    -How to access structure memebers

    --> ex: s1.age
 */
#include <stdio.h>

struct Student
{
    char name[25];
    int age;
    char branch[10];
    char gender; // F for female and M for male
} S1, S2;

void main()
{
    struct Student s1;
    s1.age = 18;
    printf("Student age is = %d\n", s1.age);
}
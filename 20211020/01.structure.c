/*
    -structure first example
    - declarination
*/
#include <stdio.h>

struct Student
{
    char name[25];
    int age;
    char branch[10];
    char gender; // F for female and M for male
};
struct Student S1, S2; // declaring variable of stuct Student

// OR

struct Student
{
    char name[25];
    int age;
    char branch[10];
    char gender; // F for female and M for male
} S1, S2;

/*
WAP to create a structure for student.
 accept his or her roll no, name, age and 5 subjects from the user and display it.
*/
#include <stdio.h>
struct student
{
    char name[10];
    int age, rollno, total, marks[5];
    float percentage;
} s1;

void main()
{
    int i;
    s1.total = 0;
    printf("enter Your Name: ");
    scanf("%s", &s1.name);
    printf("enter your roll no and age\n");
    scanf("%d %d", &s1.rollno, &s1.age);
    for (i = 0; i < 5; i++)
    {
        printf("subject %d = ", i + 1);
        scanf("%d", &s1.marks[i]);
        s1.total += s1.marks[i];
    }
    s1.percentage = s1.total / 5;
    // Output
    printf(" Name: %s\n roll no: %d\n age: %d\n", s1.name, s1.rollno, s1.age);
    for (i = 0; i < 5; i++)
    {
        printf("subject %d = %d\n", i + 1, s1.marks[i]);
    }

    printf(" total = %d\n percentage = %f\n", s1.total, s1.percentage);
}
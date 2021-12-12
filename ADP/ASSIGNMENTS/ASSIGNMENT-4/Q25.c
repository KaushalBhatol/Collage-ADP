/*
 * [x] Write a C program which reads rollno, name, marks in all subjects for 5 students
 * [x] print result wise list having rollno, name, marks, total marks, percentage,
 * [x] result for all students using structure.
 */

#include <stdio.h>
struct student
{
    char name[20];
    int rn, total, marks[5];
    float percentage;
};

void main()
{
    int i, j, n;
    n = 5; // total students
    struct student s[n];
    for (i = 0; i < n; i++)
    {
        s[i].total = 0;
        printf("enter Student %d marks: \n", i + 1);
        printf("Enter Student Name: ");
        scanf("%s", s[i].name);
        printf("enter roll no: ");
        scanf("%d", &s[i].rn);
        for (j = 0; j < n; j++)
        {

            printf("sub %d mark: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = s[i].total / n;
    }
    for (i = 0; i < n; i++)
    {
        printf("Student Name: %s\n roll no = %d total = %d, Percentage = %f\n\n", s[i].name, s[i].rn, s[i].total, s[i].percentage);
    }
}

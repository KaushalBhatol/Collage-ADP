/*
WAP to create a structure for 5 student.
 accept his or her roll no, name, age and 5 subjects from the user and display it.
*/
#include <stdio.h>
struct student
{
    int rn, age, total, marks[5];
    char name[10];
    float percentage;
};

void main()
{
    struct student s[5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        s[i].total = 0;
        printf("enter Student %d marks: \n", i + 1);
        printf("Enter Student Name: ");
        scanf("%s", &s[i].name);
        printf("enter roll no and age \n");
        scanf("%d %d", &s[i].rn, s[i].age);

        for (j = 0; j < 5; j++)
        {
            printf("sub %d mark: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 5;
    }
    // DISPLAY
    for (i = 0; i < 5; i++)
    {
        printf("Student Name %s\nroll no = %d, AGE = %d, total = %d, Percentage = %.2f%%\nSubject marks are: \n", s[i].name, s[i].rn, s[i].age, s[i].total, s[i].percentage);
        for (j = 0; j < 5; j++)
        {
            printf("subject %d marks: %d\n", j + 1, s[i].marks[j]);
        }
        printf("\n\n");
    }
}
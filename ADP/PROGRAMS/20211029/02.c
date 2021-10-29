/*
WAP to create a menu program for user . press 1) for pyramid with star 2)reverse pyramid with star.
3)pyramid with the numeric value. accept number of rows from the user.
 */
#include <stdio.h>
#include <stdlib.h>
int userInput();
void pyramid();
void rpyramid();
void npyramid();

void main()
{
    int ch;
up:
    printf("\n 1 pyramid\n 2 rev pyranid\n 3 Numbric pyramid\n 4 exit\n");
    ch = userInput();
    switch (ch)
    {
    case 1:
        pyramid();
        break;

    case 2:
        rpyramid();
        break;

    case 3:
        npyramid();
        break;

    case 4:
        exit(1);
        break;

    default:
        printf("plese enter valid value\n");
        break;
    }
    goto up;
}

int userInput()
{
    int a;
    printf("enter value: ");
    scanf("%d", &a);
    return a;
}

void pyramid()
{
    int row, i, j;
    printf("enter row\n");
    row = userInput();
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}

void rpyramid()
{
    int row, i, j;
    printf("enter row\n");
    row = userInput();
    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}

void npyramid()
{
    int row, i, j, k = 1;
    printf("enter row\n");
    row = userInput();
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %2d", k++);
        }
        printf("\n");
    }
}

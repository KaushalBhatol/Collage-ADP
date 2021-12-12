/*
[x] Write a C program get 3X3 matrix from user and find
[x] addition
[x] subtraction
[x] division
[x] multiplication
[ ] Matrices operation can be perform only if numbers of columns are same as well as number of rows are same in both atrices
[x] (Using switch case statement).
*/
#include <stdio.h>
#include <stdlib.h>

void display();
void add();
void subtract();
void MatDiv();
void multiply();
void transpose();

void main()
{
    int i, j, choice, a[3][3], b[3][3], c[3][3];

    printf("enter first matrix value\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter second matrix value\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("b[%d][%d]= ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // print both matrix
    printf("First Matrix:\n");
    display(a);
    printf("Second Matrix:\n");
    display(b);

menu:
    printf("\nChoose the matrix operation,\n");
    printf("----------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Divison\n");
    printf("4. Multiplication\n");
    printf("5. Transpose\n");
    printf("6. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        add(a, b, c);
        printf("Sum of matrix: \n");
        display(c);
        break;
    case 2:
        subtract(a, b, c);
        printf("Subtraction of matrix: \n");
        display(c);
        break;
    case 3:
        MatDiv(a, b, c);
        printf("Multiplication of matrix: \n");
        display(c);
        break;
    case 4:
        multiply(a, b, c);
        printf("Multiplication of matrix: \n");
        display(c);
        break;
    case 5:
        printf("Transpose of the first matrix: \n");
        transpose(a, c);
        display(c);
        printf("Transpose of the second matrix: \n");
        transpose(b, c);
        display(c);
        break;
    case 6:
        printf("Thank You.\n");
        exit(0);
    default:
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
    }
menu2:
    printf("[0] exit. [1] menu\n choice = ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        goto menu;
    }
    else if (choice == 0)
    {
        exit(0);
    }

    else
    {
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
        goto menu2;
    }
}

// function to add two 3x3 matrix
void add(int m[3][3], int n[3][3], int sum[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = m[i][j] + n[i][j];
}

// function to subtract two 3x3 matrix
void subtract(int m[3][3], int n[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = m[i][j] - n[i][j];
}

// function to div two 3x3 matrix
void MatDiv(int m[3][3], int n[3][3], int sum[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = m[i][j] / n[i][j];
}

// function to multiply two 3x3 matrix
void multiply(int m[3][3], int n[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0; // assign 0
            // find product
            for (int k = 0; k < 3; k++)
                result[i][j] += m[i][k] * n[k][j];
        }
    }
}

// function to find transpose of a 3x3 matrix
void transpose(int matrix[3][3], int trans[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            trans[i][j] = matrix[j][i];
}

// function to display 3x3 matrix
void display(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", matrix[i][j]);

        printf("\n"); // new line
    }
}

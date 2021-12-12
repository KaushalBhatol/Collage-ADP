/*
Write a program to perform following operation
string operations with help of string manipulation
functions.(Using switch case statement)

Note: strrev function create for linux users.
*/

#include <stdio.h>
#include <string.h>
char *strrev();

void main()
{
    int choice;
    char str1[10], str2[10];
menu:
    printf("\n\n 1. find a length\n 2. Compare two string\n 3. copy\n 4. conactention\n 5. reverse\n");
    printf("Select Your Choice: ");
    scanf("%d", &choice);

    printf("\nstring1 value: ");
    scanf("%s", str1);
    printf("string2 value: ");
    scanf("%s", str2);

    switch (choice)
    {
    case 1:
        printf("\t length of string1 is %ld", strlen(str1));
        printf("\t length of string2 is %ld", strlen(str2));
        break;

    case 2:
        choice = strcmp(str1, str2);
        if (choice == 0)
        {
            printf("str1 and str2 are equal\n");
        }
        else if (choice > 0)
        {
            printf("the first non-matching character in str1 is greater (in ASCII) than that of str2\n");
        }
        else
        {
            printf("the first non-matching character in str1 is lower (in ASCII) than that of str2.\n");
        }
        break;

    case 3:
        printf("copying string 1 to string 2\n");
        strcpy(str2, str1);
        printf("string 1 value: %s\n", str1);
        printf("string 2 value: %s\n", str2);
        break;

    case 4:
        strcat(str1, str2);
        printf("output: %s\n", str1);
        break;

    case 5:
        printf("String1 reverse is %s\n", strrev(str1));
        printf("String2 reverse is %s\n", strrev(str2));
        break;

    default:
        printf("Please enter valid value\n");
        break;
    }

menu2:
    printf("\n[0] exit, [1] back to the menu\n choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        goto menu;
    }
    else if (choice == 0)
    {
        printf("exiting program......\n");
    }
    else
    {
        printf("enter valid value\n");
        goto menu2;
    }
}

char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}
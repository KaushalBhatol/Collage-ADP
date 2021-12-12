#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int size();
void comparison();
char *cpstr();
char *sconnect();
char *reverse();

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
    case 1: // length
        printf("\t length of string1 is %d", size(str1));
        printf("\t length of string2 is %d", size(str2));
        break;

    case 2: // comparison
        comparison(str1, str2);
        break;

    case 3: // cpstr
        printf("copying string 1 to string 2\n");
        cpstr(str1, str2);
        printf("string 1 value: %s\n", str1);
        printf("string 2 value: %s\n", str2);
        break;

    case 4: // sconnect
        printf("output: %s\n", sconnect(str1, str2));
        break;

    case 5:
        printf("String1 reverse is %s\n", reverse(str1));
        printf("String2 reverse is %s\n", reverse(str2));
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

int size(char *ptr)
{
    int offset = 0;
    int count = 0;
    while (*(ptr + offset) != '\0')
    {
        ++count;
        ++offset;
    }
    return count;
}

void comparison(char *str1, char *str2)
{
    int x = size(str1), y = size(str2);
    if (x == y)
    {
        printf("both strings are equal length\n");
    }
    else if (x > y)
    {
        printf("string one is longer then string two\n");
    }
    else
    {
        printf("string two is longer then string one\n");
    }
}

char *cpstr(char *str1, char *str2)
{
    int i;
    for (i = 0; str1[i] != '\0'; ++i)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0'; // null for else words
    return str1, str2;
}

char *sconnect(char *str1, char *str2)
{
    int i = 0, j = 0;
    char *str3;
    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }

    // Insert the second string in the new string
    i = 0;
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    return str3;
}

char *reverse(char *str)
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

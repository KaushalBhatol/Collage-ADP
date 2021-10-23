/*
-WAP to display reverse of your name.
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char name[10];
    printf("Enter your name: ");
    scanf("%s", &name);

    printf("reverse name is = ");
    for (int i = strlen(name); i >= 0; i--)
    {
        printf("%c", name[i]);
    }
}
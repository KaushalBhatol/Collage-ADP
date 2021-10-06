/*
 continuse statement:

 skip some lines of code.

 syntax

    // loop statemenet
    continue;
    // some lines of the code which skipped.
*/
#include <stdio.h>

void main()
{
    int a = 10;
    do
    {
        if (a == 15)
        {
            a = a + 1;
            continue;
        }
        printf("value of a: %d\n", a);
        a++;

    } while (a < 20);
}
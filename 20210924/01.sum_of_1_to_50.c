/* 
sum of 1 to 50
*/

#include <stdio.h>
int main() {
    int sum=0, i;
    for (i = 1; i <= 50; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
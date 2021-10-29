#include <stdio.h>
void main()
{
    int rad;
    const float PI = 3.14;
    float area, ci;

    printf("Enter radius of circle: ");
    scanf("%d", &rad);

    area = PI * rad * rad;
    printf("\nArea of circle : %f ", area);

    ci = 2 * PI * rad;
    printf("\nCircumference : %f ", ci);
}
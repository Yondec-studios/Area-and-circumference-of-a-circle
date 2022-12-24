#include <stdio.h>

void main()
{
    const float PI = 3.14519;
    float radius;
    float area;
    float circumference;

    printf("\n\n\n\nEnter the radius:\t");
    scanf("%f", &radius);

    // CALCULATION
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\nArea of the circle :\t\t%.2f", area);
    printf("\nCircumference of the circle :\t%.2f", circumference);
}
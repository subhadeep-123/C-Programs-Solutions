#include <stdio.h>

int main()
{
    float radius, cirum, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("The Circumference is - %f \n", (2 * 3.1416 * radius));
    printf("The Area is - %f \n", (3.1416 * radius * radius));
}
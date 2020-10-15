#include <stdio.h>
int main()
{
    float width, height, lenght;
    float volume;

    printf("Enter the width of the pool: ");
    scanf("%f", &width);

    printf("Enter the height of the pool: ");
    scanf("%f", &height);

    printf("Enter the lenght of the pool: ");
    scanf("%f", &lenght);

    volume = lenght * width * height;

    printf("The Volume of the Pool is %f", volume);

    return 0;
}
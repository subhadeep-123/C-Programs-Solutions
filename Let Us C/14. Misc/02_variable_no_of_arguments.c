#include <stdio.h>

void coordinates(int, ...);

int main()
{
    printf("Variable No of Arguments of a Function:\n");

    //Triangle
    coordinates(3, 0.8, 11.8, 9.0);

    //Rectangle
    coordinates(4, 0.8, 11.8, 9.0, 5.9);

    //Pentagon
    coordinates(5, 1.3, 5.5, 0.8, 11.8, 9.0);
}
void coordinates(int len, ...)
{
    printf("The No of points are - %d \n", len);

    switch (len)
    {
    case 1:
        printf("This is a Point\n");
        break;
    case 2:
        printf("This is a straight Line\n");
        break;
    case 3:
        printf("This is a Triangle\n");
        break;
    case 4:
        printf("This is a Rectangle\\Trapizoid\\Rombhus\\Parallelogram\n");
        break;
    case 5:
        printf("This is a Pentagon\n");
        break;
    default:
        printf("Invalid Coordinates");
        break;
    }
}
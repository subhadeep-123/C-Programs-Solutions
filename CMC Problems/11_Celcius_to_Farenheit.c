#include <stdio.h>

int main()
{
    float cel, frn;
    printf("Enter the temperature in Celcius: ");
    scanf("%f", &cel);
    frn = (9.0 / 5.0) * cel + 32.0;
    printf("The converted Temperature in Farenheit - %f \n", frn);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
float getfloat()
{
    char num[100];
    gets(num);
    float val;
    /*Use Anyone of the below methods*/

    // val = strtod(num, NULL);
    val = atof(num);
    // val = strtof(num, NULL);

    return val;
}
int main()
{
    float num;
    num = getfloat();
    printf("\nYou have entered: %f", num);
    return 0;
}
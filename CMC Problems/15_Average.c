#include <stdio.h>

#define LEN 20

float avg(float *val, int n)
{
    float avg;

    for (int i = 0; i < n; i++)
        avg += *val++;

    avg /= n;
    return avg;
}

int main()
{
    float val[LEN];
    int n;

    printf("Enter the Lenght: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value for array[%d]: ", i);
        scanf("%f", &val[i]);
    }
    printf("The Average is - %0.2f", avg(val, n));

    return 0;
}
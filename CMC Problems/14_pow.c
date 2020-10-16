#include <stdio.h>

float pow(int x, int n)
{
    float res = 1;

    for (int i = 1; i <= n; i++)
    {
        res *= x;
    }
    return res;
}
int main()
{
    float p, r, d, res;
    printf("Enter the Principal:- ");
    scanf("%f", &p);

    printf("Enter the Rate:- ");
    scanf("%f", &r);

    printf("Enter the Duration:- ");
    scanf("%f", &d);

    res = p * ((1 + (r / 100)), d);

    printf("\nThe Amount is - %f", res);
}
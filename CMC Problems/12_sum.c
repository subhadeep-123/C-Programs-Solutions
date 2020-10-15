#include <stdio.h>
int main()
{
    int sum = 0, i;
    for (i = 1; i <= 50; i++)
        sum += i;
    printf("1..50 Sum = %d \n", sum);
    sum = 0;
    for (i = 50; i >= 0; i--)
        sum += i;
    printf("50..1 Sum - %d", sum);

    return 0;
}
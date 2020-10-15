#include <stdio.h>

int main()
{
    int i = 2, sum = 0;

    //Using While Loop
    while (i < 100)
    {
        sum += i;
        i += 3;
    }
    printf("1. While Loop, Sum = %d", sum);

    //Using Do-while Loop
    i = 2, sum = 0;
    do
    {
        sum += i;
        i += 3;
    } while (i < 100);
    printf("\n2. Do-While Loop, Sum = %d", sum);

    //Using For Loop
    sum = 0;
    for (i = 2; i < 100; i += 3)
        sum += i;
    printf("\n3. For Loop, Sum = %d", sum);
}
#include <stdio.h>

int square(int a)
{
    int val = 1;
    for (int i = 0; i < 2; i++)
        val *= a;
    return val;
}
int main()
{
    int a, b;
    printf("Enter the Number: ");
    scanf("%d", &a);

    printf("\nThe square value is - %d", square(a));

    return 0;
}
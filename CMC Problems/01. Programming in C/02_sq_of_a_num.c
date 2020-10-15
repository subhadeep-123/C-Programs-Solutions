#include <stdio.h>

#define sq(x) (x * x)

int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    printf("The sq of the num is - %d", sq(num));

    return 0;
}
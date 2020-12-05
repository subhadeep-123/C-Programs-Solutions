#include <stdio.h>
#include <stdarg.h>
int findmax(int, ...);
int main()
{
    int max;

    max = findmax(5, 4, 16, 265, 1, 59);
    printf("The max is %d \n", max);

    max = findmax(3, 99, 185, 44);
    printf("The max is %d \n", max);

    return 0;
}

int findmax(int len, ...)
{
    int max, count, num;

    va_list ptr;

    va_start(ptr, len);
    max = va_arg(ptr, int);
    for (count = 1; count < len; count++)
    {
        num = va_arg(ptr, int);
        if (num > max)
            max = num;
    }
    return max;
}
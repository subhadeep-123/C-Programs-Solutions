#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

#define _BV(x) 1 << x

int main()
{
    unsigned char num, andmask = 0;
    printf("Enter the number : ");
    scanf("%hhd", &num);
    andmask = ~(_BV(3) | _BV(5));
    num &= andmask;
    _getch();
    return 0;
}
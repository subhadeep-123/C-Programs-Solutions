#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

#define _BV(x) 1 << x

typedef unsigned char Bit;

void oddbiton(Bit *);

int main()
{
    Bit num;
    printf("Enter the number : ");
    scanf("%hhd", &num);
    oddbiton(&num);
    _getch();
    return 0;
}

void oddbiton(Bit *num)
{
    Bit andmask = 0;
    int i;
    for (i = 1; i < 8; i += 2)
        andmask |= _BV(i);
    *num |= andmask;
}
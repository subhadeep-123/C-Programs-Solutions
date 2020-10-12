#include <stdio.h>
#include <conio.h>

#define _BV(x) 1 << x

void showbits(unsigned char);

int main()
{
    int i;
    i = 10;
    showbits(i);
    _getch();
    return 0;
}

void showbits(unsigned char num)
{
    int i;
    unsigned char andmask;
    for (i = 7; i >= 0; i--)
    {
        andmask = _BV(i);
        ((andmask & num) == 0) ? printf("0") : printf("1");
    }
}
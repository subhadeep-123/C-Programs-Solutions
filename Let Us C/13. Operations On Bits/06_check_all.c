#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define _BV(x) 1 << x

int checkbits(int, int, int);

int main()
{
    int status;
    status = checkbits(14, 3, 3);
    system("cls");
    if (status)
        printf("Required bits are ON\n");
    else
        printf("Required bits are OFF\n");
    _getch();
    return 0;
}

int checkbits(int x, int p, int n)
{
    unsigned int andmask = 0;
    int i, j;
    for (i = 0, j = p; i < n; i++, j--)
        andmask |= _BV(j);
    if ((x & andmask) == andmask)
        return 1;
    else
        return 0;
}
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

#define _bv(x) 1 << x
#define _ls(x, y) x << y
#define _rs(x, y) x >> y

typedef unsigned char Bit;

void bitexchange(Bit *);

int main()
{
    Bit num;
    printf("\nEnter the number : ");
    scanf("%hhd", &num);
    printf("\nBefore shifting\n");
    printf("\nnum : %d", num);
    bitexchange(&num);
    printf("\nAfter exchange");
    printf("\nnum : %d\n", num);
    _getch();
    return 0;
}

void bitexchange(Bit *num)
{
    Bit left, right;
    left = _ls(*num, 4);
    right = _rs(*num, 4);
    *num = 0;
    *num = right | left;
}
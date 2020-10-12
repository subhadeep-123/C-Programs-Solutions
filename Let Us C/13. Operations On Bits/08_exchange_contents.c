#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <math.h>

#define _bv(x) 1 << x
#define _ls(x, y) x << y
#define _rs(x, y) x >> y

typedef unsigned short int Store;

void bitexchange(Store *);

int main()
{
    Store num;
    printf("Enter number : ");
    scanf("%hu", &num);
    printf("Before exchange\n");
    printf("num : %u\n", num);
    bitexchange(&num);
    printf("After Exchange its bytes :-\n");
    printf("num : %u\n", num);
    _getch();
    return 0;
}

void bitexchange(Store *num)
{
    unsigned char left, right;

    //	First byte (8-bits) goes to left side.
    left = _ls(*num, 8);

    //Second byts(8 - bits) goes to right side.
    right = _rs(*num, 8);

    *num = 0;
    *num = right | left;
}
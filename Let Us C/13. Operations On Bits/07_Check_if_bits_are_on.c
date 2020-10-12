#include <stdio.h>
#define _BV(x) (1 << x)
int checkbits(int num)
{
    unsigned char andmask;
    andmask = _BV(7) | _BV(6) | _BV(3);
    if ((num & andmask) == andmask)
        return 1;
    else
        return 0;
}
int main()
{
    int status;
    int check;

    printf("Enter a value: ");
    scanf("%d", &status);

    check = checkbits(status);

    if (check)
        printf("Required Bits are ON\n");
    else
        printf("Required Bits are OFF\n");
    return 0;
}
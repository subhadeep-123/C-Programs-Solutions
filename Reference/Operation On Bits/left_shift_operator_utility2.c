#include <stdio.h>
#define _BV(x) (1 << x)
int main()
{
    unsigned char a;
    a = _BV(3);
    printf("a = %02x", a);
    return 0;
}
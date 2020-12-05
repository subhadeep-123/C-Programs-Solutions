#include <stdio.h>
int main()
{
    unsigned char a;

    a = 1 << 3;
    printf("a = %02x", a);
    return 0;
}
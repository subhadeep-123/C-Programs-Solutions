#include <stdio.h>
#define _BV(x) (1 << x)

int dec_to_bin(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2 + 10 * dec_to_bin(n / 2));
}
int main()
{
    int bin;
    unsigned char num = 20;
    bin = dec_to_bin(num);
}
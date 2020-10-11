#include <stdio.h>
#include <conio.h>
#include <math.h>

#define _BV(x) (1 << x)

typedef unsigned short int Time;

void time(Time, int *, int *, int *);

int main()
{
    Time t = 2081;
    /*Its Binary equivalent is 
00001 000001 00001
So, first bit of hr, min and sec are
1, so their value will be 2^0, i.e. 1
*/
    int hr = 0, min = 0, sec = 0;
    time(t, &hr, &min, &sec);
    printf("Hour: %d\nMin: %d\nSec: %d\n", hr, min, sec);
    return 0;
}

void time(Time t, int *hr, int *min, int *sec)
{
    int i;
    for (i = 0; i < 16; i++)
    {
        if (t & _BV(i))
        {
            if (i < 5)
                *sec += (int)pow(2, i);
            else if (i > 10)
                *hr += (int)pow(2, i - 11);
            else
                *min += (int)pow(2, i - 5);
        }
    }
}
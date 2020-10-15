#include <stdio.h>

int main()
{
    int s = 55, h = 4;
    float dist, i;
    for (i = 0.5; i <= 4; i = i + 0.5)
    {
        dist = s * i;
        printf("The Distance at Speed at %0.1f is %0.1f \n", i, dist);
    }
}
#include <stdio.h>
#include <string.h>
int main()
{
    char num[30];
    int m = 10, i, cval = 0;
    printf("Enter any number:-\n");
    gets(num);
    for (i = 0; i <= strlen(num); i++)
    {
        cval = (cval * m) + (int)i;
    }
    printf("%d", cval);
}
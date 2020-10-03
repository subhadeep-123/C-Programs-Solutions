#include <stdio.h>
#include <conio.h>
int getint()
{
    return (getchar() - '0');
}
int main()
{
    int a;
    a = getint();
    printf("You have entered! %d", a);
    return 0;
}
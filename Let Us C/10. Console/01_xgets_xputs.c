#include <stdio.h>
void xgets(char *a)
{
    gets(a);
}
void xputs(char *a)
{
    puts(a);
}
int main()
{
    char name[10];
    xgets(name);
    xputs(name);
    return 0;
}
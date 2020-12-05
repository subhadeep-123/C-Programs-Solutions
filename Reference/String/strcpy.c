#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Subhadeep Banerjee";
    char target[20];
    strcpy(target, str);
    printf("%s", target);
    return 0;
}
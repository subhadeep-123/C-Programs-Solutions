#include <stdio.h>
int xstrlen(char *p)
{
    int count = 0;
    while (*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}
int main()
{
    char str[] = "Subhadeep Banerjee";

    int len = xstrlen(str);
    printf("Length - %d", len);

    return 0;
}

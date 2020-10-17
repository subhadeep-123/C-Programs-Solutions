#include <stdio.h>
#include <stdlib.h>

int max(char *a, char *b, char *res)
{
    if (*a > *b)
        *res = *a;
    else
        *res = *b;
}
int main(int argc, char *argv[])
{
    char val;
    if (argc != 3)
    {
        printf("Improper No of arguments!!\n");
        exit(1);
    }
    max(argv[1], argv[2], &val);
    printf("The max Value - %c", val);
}
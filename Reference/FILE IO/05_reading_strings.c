#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char s[100];
    fp = fopen("Target.txt", "r");
    if (fp == NULL)
    {
        puts("File cannot be open..");
        exit(1);
    }
    while (fgets(s, 100, fp) != NULL)
        printf("%s", s);
    fclose(fp);
}
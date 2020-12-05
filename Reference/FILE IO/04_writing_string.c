#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char s[100];
    fp = fopen("Target.txt", "w");
    if (fp == NULL)
    {
        puts("Cannot open the file!");
        exit(1);
    }
    printf("Enter the text\n");
    while (strlen(gets(s)) > 0)
    {
        fputs(s, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    return 0;
}
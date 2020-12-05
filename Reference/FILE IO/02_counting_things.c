#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define OR ||
int main()
{
    FILE *fp;
    char ch, s[100];
    int c_all, c_chars, c_spaces, c_line, c_tabs;
    c_all = c_chars = c_spaces = c_line = c_tabs = 0;
    chdir("c:\\Users\\SUBHADEEP\\Desktop");
    printf("Dir - %s \n", getcwd(s, 100));

    fp = fopen("To read.txt", "r");
    if (fp == NULL)
    {
        puts("File does not exit..");
        exit(1);
    }
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        c_chars++;
        if (ch == '/' OR ':' OR '.' OR '=' OR '%')
            c_all++;
        if (ch == ' ')
            c_spaces++;
        if (ch == '\n')
            c_line++;
        if (ch == '\t')
            c_tabs++;
    }
    fclose(fp);
    printf(" Characters - %d \n Spaces - %d \n Tabs - %d \n Special Characters - %d \n Lines - %d", c_chars, c_spaces, c_tabs, c_all, c_line);
    return 0;
}
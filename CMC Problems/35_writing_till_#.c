#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    FILE *fp;
    char s[100];
    unsigned short int count = 0;
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    system("cls");
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        puts("Cannot Open the File!!");
        exit(0);
    }
    while (strlen(gets(s)) > 0 && s != '#')
    {
        fputs(s, fp);
        fputs("\n", fp);
    }
    puts("\nEnter anything to exit...");
    getch();
    return 0;
}
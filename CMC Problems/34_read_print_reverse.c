#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    FILE *fp, *fs;
    char ch[20];
    unsigned short int count = 0;
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    system("cls");
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        puts("Cannot Open the File!!");
        exit(0);
    }
    fs = fopen("target.txt", "w");
    if (fs == NULL)
    {
        puts("Cannot Open the File!!");
        exit(0);
    }
    while (fscanf(fp, "%s", ch) != EOF)
    {
        strrev(ch);
        fputs(ch, fs);
        fputc(' ', fs);
    }

    puts("\nEnter anything to exit...");
    getch();
    return 0;
}
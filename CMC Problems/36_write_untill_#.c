#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
int main()
{
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    FILE *fp;
    char ch;
    fp = fopen("file.txt", "w");
    if (fp == 0)
    {
        puts("Cannot Open the file!!");
        exit(0);
    }
    while ((ch = getc(stdin)) != '#')
        fputc(ch, fp);
    fclose(fp);
    printf("Enter anything to exit..");
    getch();
    return 0;
}
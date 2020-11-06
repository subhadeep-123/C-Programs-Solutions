#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>

int main()
{
    FILE *fp;
    char ch;
    unsigned short int count = 0;
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    system("cls");
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        puts("Cannot Open the File!!");
        exit(0);
    }

    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        count++;
    }
    fclose(fp);
    printf("Characters are: %u", count);

    puts("\nEnter anything to exit...");
    getch();
    return 0;
}
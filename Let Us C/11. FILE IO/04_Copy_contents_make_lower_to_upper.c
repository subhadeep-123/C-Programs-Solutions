#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <ctype.h>
int main()
{
    FILE *fs, *ft;
    char ch;
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    fs = fopen("File.txt", "r");
    if (fs == NULL)
    {
        puts("Cannot Open the File");
        exit(1);
    }
    ft = fopen("New_File.txt", "w");
    if (ft == NULL)
    {
        puts("Cannot Open the File");
        fclose(fs);
        exit(1);
    }
    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF)
            break;
        else
        {
            // ch = strupr(ch);
            fputc(toupper(ch), ft);
        }
    }

    fclose(fs);
    fclose(ft);
    printf("\nEnter anything to exit..");
    getch();
    return 0;
}
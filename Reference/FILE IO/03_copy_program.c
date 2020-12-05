#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    FILE *fs, *ft;
    char ch;
    chdir("c:\\Users\\SUBHADEEP\\Desktop");

    fs = fopen("Test.txt", "r");
    if (fs == NULL)
    {
        puts("File does not exit..");
        exit(1);
    }

    ft = fopen("Target.txt", "w");
    if (ft == NULL)
    {
        puts("File does not exit..");
        fclose(fs);
        exit(1);
    }

    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF)
            break;
        else
            fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);
    getch();
    return 0;
}
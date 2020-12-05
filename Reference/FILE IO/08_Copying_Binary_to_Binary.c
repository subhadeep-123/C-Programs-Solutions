#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>
int main()
{
    FILE *fs, *ft;
    char ans = 'y';
    int ch;

    // chdir("C:\\Users\\SUBHADEEP\\Desktop");

    system("cls");

    fs = fopen("file.exe", "rb");
    if (fs == NULL)
    {
        puts("Source File cannot be open..\n");
        exit(1);
    }

    ft = fopen("Target_file.exe", "wb");
    if (ft == NULL)
    {
        puts("Target File cannot be open..\n");
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
    printf("\nEnter anything to exit... ");
    getch();
    return 0;
}
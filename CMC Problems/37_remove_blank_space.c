#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
int main()
{
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    FILE *fs, *ft;
    char ch;
    fs = fopen("file.txt", "r");
    if (fs == 0)
    {
        puts("Cannot Open the Source file!!");
        exit(0);
    }
    ft = fopen("target.txt", "w");
    if (ft == 0)
    {
        puts("Cannot Open the Target file!!");
        exit(1);
    }
    while ((ch = getc(fs)) != EOF)
        if (ch != ' ')
            fputc(ch, ft);
    fclose(fs);
    fclose(ft);
    remove("file.txt");
    rename("target.txt", "newfile.txt");
    printf("Enter anything to exit..");
    getch();
    return 0;
}
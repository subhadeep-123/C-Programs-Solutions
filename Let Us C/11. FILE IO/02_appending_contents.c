#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main()
{
    FILE *fs, *ft;
    char text[100];
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
    //Both of the process are good
    //This one if for strings
    while (fgets(text, 100, fs) != NULL)
    {
        fputs(text, ft);
    }
    //This does the job too
    //But it is mainly used for characters
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
    return 0;
}
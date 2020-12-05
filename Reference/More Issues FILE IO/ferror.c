#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    FILE *fs;
    char ch;
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    if (argc != 2)
    {
        puts("Improper No of Arguments");
        exit(1);
    }
    fs = fopen(argv[1], "w");
    if (fs == NULL)
    {
        puts("Cannot open the File");
        exit(2);
    }
    while (!feof(fs))
    {
        ch = fgetc(fs);
        if (ch == EOF)
            break;
        if (ferror(fs))
        {
            // printf("Error in Reading the file");
            perror("TRIAL");
            // exit(3);
            break;
        }
        else
        {
            printf("%c", ch);
        }
    }
}
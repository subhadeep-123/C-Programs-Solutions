#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    FILE *fs,
        *ft;
    char ch;

    if (argc != 3)
    {
        puts("Improper no of arguments");
        exit(1);
    }
    fs = fopen(argv[1], "r");
    if (fs == NULL)
    {
        printf("Cannot open the source file");
        exit(1);
    }

    ft = fopen(argv[2], "w");
    if (ft == NULL)
    {
        printf("Cannot Open the target file");
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
    return 0;
}
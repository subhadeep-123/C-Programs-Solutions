#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    FILE *fs, *ft;
    char ch, word[50];
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    if (argc != 4)
    {
        printf("Improper No of arguments!!");
        exit(1);
    }
    fs = fopen(argv[3], "r");
    if (fs == NULL)
    {
        puts("Cannont Open the Source File!");
        exit(2);
    }
    ft = fopen("temp.txt", "w");
    if (ft == NULL)
    {
        puts("Cannont Open the Target File!");
        exit(3);
    }

    while (fscanf(fs, "%s", word) != EOF)
    {
        if (strcmp(word, argv[1]) != 0)
        {
            fputs(word, ft);
            fputc(' ', ft);
        }
        else
        {
            fputs(argv[2], ft);
            fputc(' ', ft);
        }
    }
    fclose(fs);
    fclose(ft);
    remove("Story.txt");
    rename("temp.txt", "Story.txt");
    printf("\n\nEnter Anything To Exit..");
    getch();
    return 0;
}
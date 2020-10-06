#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main()
{
    FILE *fs, *ft;
    char word[20], ch;
    system("cls");
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    fs = fopen("File.txt", "r");
    if (fs == NULL)
    {
        printf("\nCannon Open the Source FIle...");
        exit(1);
    }
    ft = fopen("Temp.txt", "w");
    if (ft == NULL)
    {
        printf("\nCannon Open the Tarfget Ile...");
        exit(1);
    }
    while (fscanf(fs, "%s", word) != EOF)
    {
        strrev(word);
        fputs(word, ft);
        fputc(' ', ft);
    }

    fclose(fs);
    fclose(ft);
    return 0;
}
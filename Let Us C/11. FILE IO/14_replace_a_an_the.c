#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    char word[30];
    FILE *fs, *ft;
    system("cls");
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    fs = fopen("Paragraph.txt", "r");
    if (fs == NULL)
    {
        printf("\nCannon Open the FIle...");
        exit(1);
    }
    ft = fopen("Temp.txt", "w");
    if (ft == NULL)
    {
        printf("\nCannon Open the FIle...");
        fclose(fs);
        exit(1);
    }
    while (fscanf(fs, "%s", word) != EOF)
    {
        if (strcmp(word, "a") == 0 || strcmp(word, "an") == 0 || strcmp(word, "the") == 0)
        {
            strcpy(word, " ");
            fputs(word, ft);
        }
        else
        {
            fputs(word, ft);
            fputc(' ', ft);
        }
    }
    fclose(fs);
    fclose(ft);
    remove("Paragraph.txt");
    rename("Temp.txt", "Paragraph.txt");
    printf("Enter Anything to exit..");
    getch();
    return 0;
}
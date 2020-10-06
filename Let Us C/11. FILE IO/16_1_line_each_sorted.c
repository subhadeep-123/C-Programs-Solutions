#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

void lower()
{
    char ch;
    FILE *fs, *lfs;
    fs = fopen("File.txt", "r");
    if (fs == NULL)
    {
        printf("\nCannon Open the FIle...");
        exit(1);
    }
    lfs = fopen("Lower.txt", "r");
    if (lfs == NULL)
    {
        lfs = fopen("Lower.txt", "w");
    }
    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF)
            break;
        else
        {
            fputc(tolower(ch), lfs);
        }
    }
    remove("File.txt");
    fclose(fs);
    fclose(lfs);
}
void sort()
{
    FILE *fs, *ft;
    char word[30], temp;
    lower();
    fs = fopen("Lower.txt", "r");
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
        for (int i = 0; i < strlen(word) - 1; i++)
        {
            for (int j = i + 1; j < strlen(word); j++)
            {
                if (word[i] > word[j])
                {
                    temp = word[i];
                    word[i] = word[j];
                    word[j] = temp;
                }
            }
        }
        fputs(word, ft);
        fputc('\n', ft);
    }
    remove("Lower.txt");
    fclose(fs);
    fclose(ft);
}
int main()
{
    system("cls");
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    sort();
    printf("Enter Anything to exit..");
    getch();
    return 0;
}

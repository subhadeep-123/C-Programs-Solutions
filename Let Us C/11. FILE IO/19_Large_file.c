#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <unistd.h>
void pagebreak(FILE *fp)
{
    int dot = 0;
    char ch;
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
        if (ch == '.')
        {
            if (dot == 50)
            {
                printf("Press any key. . .");
                _getch();
                system("cls");
                dot = 1;
            }
            else
                dot++;
        }
    }
}
int main()
{
    FILE *fs;
    system("cls");
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    fs = fopen("Story.txt", "r");
    if (fs == NULL)
    {
        printf("\nCannon Open the Source FIle...");
        exit(1);
    }
    pagebreak(fs);
    fclose(fs);
    return 0;
}
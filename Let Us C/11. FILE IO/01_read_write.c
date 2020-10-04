#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>
int main()
{
    FILE *fs, *ft;
    char text[100], ch;
    int n_chars, n_lines;
    n_chars = n_lines = 0;
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    fs = fopen("File.txt", "w");
    if (fs == NULL)
    {
        puts("Cannot Open the File");
        exit(1);
    }
    ft = fopen("File.txt", "r");
    if (ft == NULL)
    {
        puts("Cannot Open the File");
        exit(1);
    }
    puts("Enter Some Text ");
    //Writing to the file
    while (strlen(gets(text)) > 0)
    {
        fputs(text, fs);
        fputs("\n", fs);
    }
    fclose(fs);
    system("cls");
    //Reading From the file
    while (fgets(text, 100, ft) != NULL)
        printf("%s", text);
    while (1)
    {
        ch = fgetc(ft);
        if (ch == EOF)
            break;
        n_chars++;
        if (ch == '\n')
            n_lines++;
    }

    printf("The no of characters are - %d\nNo. of Lines are - %d", n_chars, n_lines);

    fclose(ft);
    printf("\nEnter anything to exit..");
    getch();
    return 0;
}
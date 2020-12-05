#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
struct data
{
    char Fname[50];
    char Lname[50];
} d;
int main()
{
    FILE *fp;
    char ans = 'y';
    fp = fopen("Data.DAT", "rb");
    system("cls");
    if (fp == NULL)
    {
        puts("Cannon open file..");
        exit(1);
    }
    while (fread(&d, sizeof(d), 1, fp) == 1)
        printf("%s %s \n", d.Fname, d.Lname);
    fclose(fp);
    puts("Enter anything to exit.. ");
    getch();
    return 0;
}
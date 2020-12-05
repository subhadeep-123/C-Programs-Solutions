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
    fp = fopen("Data.DAT", "wb");
    system("cls");
    if (fp == NULL)
    {
        puts("Cannon open file..");
        exit(1);
    }
    do
    {
        puts("\nEnter Firstname: ");
        gets(d.Fname);
        puts("Enter Lastname: ");
        gets(d.Lname);
        fwrite(&d, sizeof(d), 1, fp);
        // fputs("\n", fp);
        puts("Add Another Record (Y/N): ");
        fflush(stdin);
        ans = getche();
    } while (ans == 'Y' | ans == 'y');
    fclose(fp);
    puts("\nEnter anything to exit.. ");
    getch();
    return 0;
}
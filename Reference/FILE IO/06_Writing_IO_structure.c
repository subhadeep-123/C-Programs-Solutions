#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>
struct data
{
    char name[20];
    char complexion[20];
    char height[10];
    int age;
} d;
int main()
{
    FILE *fp;
    char ans = 'y';
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    system("cls");
    fp = fopen("File.txt", "w");
    if (fp == NULL)
    {
        puts("File cannot be open..\n");
        exit(1);
    }
    do
    {
        puts("\nEnter Name: ");
        gets(d.name);
        puts("Enter Complexion: ");
        gets(d.complexion);
        puts("Enter Height: ");
        gets(d.height);
        puts("Enter the Age");
        scanf("%d", &d.age);
        fprintf(fp, "%s %s %s %d", d.name, d.complexion, d.height, d.age);
        fputs("\n", fp);
        puts("Add another record (Y/N)..");
        fflush(stdin);
        ans = getche();
    } while (ans == 'y');
    fclose(fp);
    printf("\nEnter anything to exit... ");
    getch();
    return 0;
}
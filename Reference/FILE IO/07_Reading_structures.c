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
    fp = fopen("File.txt", "r");
    if (fp == NULL)
    {
        puts("File cannot be open..\n");
        exit(1);
    }
    while (fscanf(fp, "%s %s %s %d", &d.name, &d.complexion, &d.height, &d.age) != EOF)
    {
        printf("%s %s %s %d \n", d.name, d.complexion, d.height, d.age);
    }

    fclose(fp);
    printf("\nEnter anything to exit... ");
    getch();
    return 0;
}
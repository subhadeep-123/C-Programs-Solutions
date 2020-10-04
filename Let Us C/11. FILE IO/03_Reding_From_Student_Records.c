#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
struct data
{
    char name[30];
    int age;
} d;
int main()
{
    FILE *fp;
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    system("cls");
    fp = fopen("File.txt", "r");
    if (fp == NULL)
    {
        puts("File cannot be open..\n");
        exit(1);
    }
    while (fscanf(fp, "%s %d", &d.name, &d.age) != EOF)
        printf("%s %d \n", d.name, d.age);
    fclose(fp);
    printf("\nEnter anything to exit..");
    getch();
    return 0;
}
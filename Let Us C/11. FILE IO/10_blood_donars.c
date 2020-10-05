#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
struct donars
{
    char name[30];
    char address[50];
    int age, blood_type;
};
void add_info(char *name, char *add, int age, int blood_type)
{
    FILE *fs;
    struct donars d;
    fs = fopen("DONARS.txt", "a");
    if (fs == NULL)
    {
        puts("Cannot open Donars File!");
        exit(1);
    }
    strcpy(d.name, name);
    strcpy(d.address, add);
    d.age = age;
    d.blood_type = blood_type;
    fprintf(fs, "%s %s %d %d \n", d.name, d.address, d.age, d.blood_type);
    fclose(fs);
}
void display()
{
    FILE *fs;
    struct donars d;
    fs = fopen("DONARS.txt", "r");
    if (fs == NULL)
    {
        puts("Cannot open Donars File!");
        exit(1);
    }
    printf("\t\tDisplaying Data");
    while (fscanf(fs, "%s %s %d %d", d.name, d.address, d.age, d.blood_type) != EOF)
    {
        printf("\nName - %s", d.name);
        printf("\nAddress - %s", d.address);
        printf("\nAge - %d", d.age);
        printf("\nBlood Type - %d \n", d.blood_type);
    }
    fclose(fs);
}
void showrecords(int age, int b_type, int len)
{
    int i;
    FILE *fs;
    struct donars d[100];
    fs = fopen("DONARS.txt", "r");
    if (fs == NULL)
    {
        puts("Cannot open Donars File!");
        exit(1);
    }
    while (fscanf(fs, "%s %s %d %d", d->name, d->address, d->age, d->blood_type) != EOF)
    {
        for (i = 0; i < len; i++)
        {
            if (d[i].age < age && d[i].blood_type == 2)
                printf("%s \n", d[i].name);
        }
    }
}
int main()
{
    int i, len, age, blood_type;
    char name[30], address[50];
    system("cls");
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    puts("How many Entries do you wanna make: ");
    scanf("%d", &len);
    fflush(stdin);
    for (i = 0; i < len; i++)
    {
        printf("\t Entry %d\n", i);
        printf("Name: ");
        scanf("%s", name);
        printf("Address: ");
        scanf("%s", address);
        printf("Age: ");
        scanf("%d", &age);
        printf("Blood Type: ");
        scanf("%d", &blood_type);
        add_info(name, address, age, blood_type);
    }
    printf("\nInto Display\n");
    display();
    printf("Going to ShowRecords\n");
    showrecords(25, 2, len);

    printf("Enter Anything to Exit...");
    getch();
    return 0;
}

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define LEN 5
void add_data(char *text)
{

    FILE *fs;
    fs = fopen("Sudents_Names.txt", "a");
    if (fs == NULL)
    {
        printf("Cannon Open the Mail File..\n");
        exit(1);
    }
    fputs(text, fs);
    fputs("\n", fs);
    fclose(fs);
}
void display()
{
    FILE *fs;
    char names[30];
    fs = fopen("Sudents_Names.txt", "r");
    if (fs == NULL)
    {
        printf("Cannon Open the Mail File..\n");
        exit(1);
    }
    while (fscanf(fs, "%s", names) != EOF)
        printf("%s \n", names);
    fclose(fs);
}
void provision(int num)
{
    FILE *fs;
    int i;
    char names[30];
    fs = fopen("Sudents_Names.txt", "r");
    if (fs == NULL)
    {
        printf("Cannon Open the Mail File..\n");
        exit(1);
    }
    i = 1;
    while (fscanf(fs, "%s", names) != EOF)
    {
        if (i == num)
            printf("The Nth Name is - %s \n", names);
        i++;
    }
    printf("Printing All Names That Starts with S!!\n");
    rewind(fs);
    while (fscanf(fs, "%s", names) != EOF)
    {
        if (names[0] == 's' || names[0] == 'S')
            printf("%s \n", names);
    }
    fclose(fs);
}
int main()
{
    char name[30];
    int i, num;
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    system("cls");
    for (i = 0; i < LEN; i++)
    {
        printf("Enter Name - %d: ", i);
        scanf("%s", &name);
        add_data(name);
    }
    printf("\n\t Displaying:\n");
    display();
    printf("\nEnter the value of n: ");
    scanf("%d", &num);
    provision(num);

    printf("\nEnter any Key to exit..");
    _getch();
    return 0;
}
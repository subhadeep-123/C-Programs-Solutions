#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>
#define LEN 10
struct student
{
    int roll;
    char name[30];
};
void addinfo(int roll, char *name)
{
    FILE *fs;
    struct student s;
    fs = fopen("Students_Records.txt", "a");
    if (fs == NULL)
    {
        printf("Cannon Open the File..");
        exit(1);
    }
    s.roll = roll;
    strcpy(s.name, name);
    fprintf(fs, "%d %s \n", s.roll, s.name);
    fclose(fs);
}
void display(char *file)
{
    FILE *fs;
    struct student s;
    fs = fopen(file, "r");
    if (fs == NULL)
    {
        printf("Cannon Open the File..");
        exit(1);
    }
    rewind(fs);
    while (fscanf(fs, "%d %s", &s.roll, s.name) != EOF)
        printf("%d %s \n", s.roll, s.name);
    fclose(fs);
}
void update(char *tfile)
{
    FILE *tf, *mf, *uf;
    char code, name[20];
    int rollno, i;
    struct student s_mf;
    tf = fopen(tfile, "r");
    if (tf == NULL)
    {
        printf("\nTransaction file is not found");
        printf("\nexiting...\n");
        exit(1);
    }
    mf = fopen("Students_Records.txt", "r");
    if (mf == NULL)
    {
        printf("\nMaster file is not found\nexiting...\n");
        exit(2);
    }
    while (1)
    {
        code = fgetc(tf);
        if (code == 0)
        {
            fseek(tf, 1, SEEK_CUR);
            rollno = fgetc(tf) - 48;
            while (1)
            {
                fread(&s_mf, sizeof(s_mf), 1, mf);
                if (s_mf.roll < rollno)
                    fwrite(&s_mf, sizeof(s_mf), 1, mf);
                else
                    break;
            }
            while (fgetc(tf) == '\n')
                ;
            fseek(tf, -1, SEEK_CUR);
        }
        else if (code == 1)
        {
            fseek(tf, 1, SEEK_CUR);
            rollno = fgetc(tf) - 48;
            fseek(tf, 1, SEEK_CUR);
            for (i = 0; 1; i++)
            {
                name[i] = fgetc(tf);
                if (name[i] == '\n' || name[i] == EOF)
                {
                    name[i] = '\0';
                    break;
                }
            }
            s_mf.roll = rollno;
            strcpy(s_mf.name, name);
            fwrite(&s_mf, sizeof(s_mf), 1, uf);
        }
        else
        {
            while (fread(&s_mf, sizeof(s_mf), 1, mf) == 1)
                fwrite(&s_mf, sizeof(s_mf), 1, uf);
            break;
        }
    }
    fclose(uf);
    fclose(mf);
    fclose(tf);
}
int main()
{
    int i, roll;
    char name[20];
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    system("cls");
    for (i = 0; i < LEN; i++)
    {
        printf("\t\nEntey No - %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &roll);
        fflush(stdin);
        printf("Name: ");
        scanf("%[^\n]s", name);
        addinfo(roll, name);
    }
    printf("\n\t The List of Students: \n");
    display("Students_Records.txt");
    printf("\n\t Updating The List: \n");
    update("Transaction.txt");
    printf("Enter any key to exit..");
    getch();
    return 0;
}

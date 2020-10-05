#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
struct date
{
    int d, m, y;
};
struct employee
{
    char empcode[6];
    char empname[20];
    struct date join_date;
    float salary;
} e;
void display(char *);
void add_info(char *, char *, struct date, float);
void sortbydof(char *);
void swap(struct employee **, struct employee *);
int main()
{
    //Changing the Directory
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    system("cls");
    struct date d = {13, 1, 1995};
    add_info("EMP01", "Suvharadip", d, 50000.00);
    d.d = 17;
    d.m = 5;
    d.y = 1994;
    add_info("EMP04", "Shubham", d, 45000.00);
    d.d = 7;
    d.m = 7;
    d.y = 1995;
    add_info("EMP03", "Rajarshee", d, 45000.00);
    d.d = 2;
    d.m = 11;
    d.y = 1995;
    add_info("EMP02", "Richard", d, 45000.00);
    d.d = 15;
    d.m = 1;
    d.y = 2001;
    add_info("EMP04", "Vijay", d, 21000.00);
    d.d = 24;
    d.m = 5;
    d.y = 1993;
    add_info("EMP06", "Shanu", d, 55000.00);
    sortbydoj("Record.dat");
    printf("\nEnter anything to exit: ");
    getch();
    return 0;
}
void display(char *file)
{
    FILE *fs;
    fs = fopen(file, "rb");
    if (fs == NULL)
    {
        puts("Cannont open the File!!");
        exit(1);
    }
    while (fread(&e, sizeof(e), 1, fs))
    {
        printf("\n%s", e.empcode);
        printf("\t%s", e.empname);
        printf("\t%d", e.join_date.d);
        printf("\t%d", e.join_date.m);
        printf("\t%d", e.join_date.y);
        printf("\t%f\n", e.salary);
    }
    fclose(fs);
}
void add_info(char *code, char *name, struct date jdate, float sal)
{
    FILE *fs;
    fs = fopen("Rocord.dat", "rb");
    if (fs == NULL)
    {
        puts("Cannont open the File!!");
        exit(1);
    }
}
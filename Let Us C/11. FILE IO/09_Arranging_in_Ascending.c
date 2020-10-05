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
};
void display(char *);
void add_info(char *, char *, struct date, float);
void sortbydoj(char *);
void swap(struct employee *, struct employee *);
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
    struct employee e;
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
    struct employee e;
    fs = fopen("Record.dat", "rb+");
    if (fs == NULL)
        fs = fopen("Record.dat", "wb");
    strcpy(e.empcode, code);
    strcpy(e.empname, name);
    e.join_date = jdate;
    e.salary = sal;
    fseek(fs, 0, SEEK_END);
    fwrite(&e, sizeof(e), 1, fs);
    fclose(fs);
}
void swap(struct employee *a, struct employee *b)
{
    struct employee temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void sortbydoj(char *file)
{
    int i = 0, j, count;
    FILE *fp1;
    struct employee e[100], temp;
    fp1 = fopen(file, "rb");
    if (fp1 == NULL)
    {
        puts("\nUnable to open file or the file do not exist.");
        exit(1);
    }
    while (1)
    {
        /*Saving the data in the array of structures*/
        if (fread(&e[i], sizeof(e[i]), 1, fp1) != 1)
            break;
        i++;
    }
    /*Total number of records*/
    count = 1;

    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (e[i].join_date.y >= e[j].join_date.y)
                if (e[i].join_date.y > e[j].join_date.y)
                    swap(&e[i], &e[j]);
                else if (e[i].join_date.m >= e[j].join_date.m)
                    if (e[i].join_date.m > e[j].join_date.m)
                        swap(&e[i], &e[j]);
                    else if (e[i].join_date.d >= e[j].join_date.d)
                        swap(&e[i], &e[j]);
        }
    }

    /*Printing the array after sorting by date of joining*/

    printf("Employee Id\tName\t\tdd  mm  yyyy\tSalary\n");
    for (i = 0; i < count; i++)
    {
        printf("\n%-12s", e[i].empcode);
        printf("\t%s", e[i].empname);
        printf("\t % 2d", e[i].join_date.d);
        printf("% 2d", e[i].join_date.m);
        printf("% 2d", e[i].join_date.y);
        printf("\t%2.2f\n", e[i].salary);
    }
}

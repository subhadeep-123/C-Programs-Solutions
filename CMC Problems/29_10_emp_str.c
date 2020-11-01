#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define LEN 3
typedef struct emp
{
    char name[20];
    unsigned short int age;
    unsigned int sal;

} EMP;
EMP e[LEN];
void display()
{
    printf("\t\tPrinting the value from the string:");
    for (int i = 0; i < LEN; i++)
    {
        printf("\nPrinting Value of Employee %d", i + 1);
        printf("\nName: %s", e[i].name);
        printf("\nAge: %u", e[i].age);
        printf("\nSalary: %u", e[i].sal);
    }
}
int comparator(const void *p, const void *q)
{
    return strcmp(((EMP *)p)->name, ((EMP *)q)->name);
}
int main()
{
    int i;
    system("cls");
    printf("Enter the Value in the str:\n");
    for (i = 0; i < LEN; i++)
    {
        printf("Enter for Employee %d", i + 1);
        printf("\nName: ");
        scanf("%s", e[i].name);
        printf("Age: ");
        scanf("%u", &e[i].age);
        printf("Salary: ");
        scanf("%u", &e[i].sal);
    }
    printf("\nUnsorter:\n");
    display();
    qsort(e, LEN, sizeof(EMP), comparator);
    printf("\nUnsorter:\n");
    display();

    puts("\nEnter anything to exit...");
    getch();
    return 0;
}
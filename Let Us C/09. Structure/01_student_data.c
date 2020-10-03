#include <stdio.h>
#include <conio.h>
#include <windows.h>
#pragma pack(1)
#define SIZE 450
struct student
{
    int roll;
    char name[20];
    char dept[20];
    char yop[10];
} s[SIZE];
void names(char *n)
{
    printf("%s\n", n);
}
void print_details(struct student s)
{
    printf("%d %s %s %s", s.roll, s.name, s.dept, s.yop);
}
int main()
{
    // struct student s[SIZE];
    int i, ch, temp;
    char ans = 'y';
    system("cls");
    printf("Enter the detils!\n");
    printf("Roll \tName \tDepartment \tYOP\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("Student - %d\n", i);
        fflush(stdin);
        scanf("%d %s %s %s", &s[i].roll, &s[i].name, &s[i].dept, &s[i].yop);
    }
    do
    {
        printf("1. To Print the record of name\n");
        printf("2. To Print the details of a student basend on the roll number\n");
        printf("Enter your choice:- ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (i = 0; i < SIZE; i++)
                names(s[i].name);
            break;
        case 2:
            printf("Enter the Roll no to search:- ");
            scanf("%d", &temp);
            for (i = 0; i < SIZE; i++)
                if (s[i].roll == temp)
                    print_details(s[i]);
            break;
        default:
            printf("Enter a valid choice\n");
        }
        while (getchar() != '\n')
            ;
        printf("\nWant to enter another name (y/n) : ");
        scanf("%c", &ans);
    } while (ans == 'y');
    printf("Enter anything to exit..");
    getch();
    return 0;
}
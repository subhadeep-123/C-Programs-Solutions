#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define LEN 5
struct employee
{
    int e_num;
    char e_name[30];
    char e_sex[10];
    int g_sal;
};
void add_info(int no, char *name, char *sex, int gsal)
{
    FILE *fs;
    struct employee e;
    fs = fopen("Employee Records.DAT", "ab");
    if (fs == NULL)
    {
        printf("\nCannot Open the File...");
        exit(1);
    }
    fseek(fs, 1, SEEK_END);
    e.e_num = no;
    strcpy(e.e_name, name);
    strcpy(e.e_sex, sex);
    e.g_sal = gsal;
    fprintf(fs, "%d %s %s %d \n", e.e_num, e.e_name, e.e_sex, e.g_sal);
    fclose(fs);
}
void display()
{
    FILE *fs;
    struct employee e;
    fs = fopen("Employee Records.DAT", "rb+");
    if (fs == NULL)
    {
        printf("\nCannot Open the File...");
        exit(1);
    }
    rewind(fs);
    while (fscanf(fs, "%d %s %s %d", &e.e_num, e.e_name, e.e_sex, &e.g_sal) != EOF)
        printf("%d %s %s %d\n", e.e_num, e.e_name, e.e_sex, e.g_sal);
    fclose(fs);
}
void delete (int s_num)
{
    FILE *fs, *temp;
    struct employee e;
    fs = fopen("Employee Records.DAT", "rb+");
    if (fs == NULL)
    {
        printf("\nCannot Open the File Master File...");
        exit(1);
    }
    temp = fopen("Temp Records.DAT", "wb");
    if (fs == NULL)
    {
        printf("\nCannot Open the File Temporary File...");
        fclose(fs);
        exit(1);
    }
    while (fscanf(fs, "%d %s %s %d", &e.e_num, e.e_name, e.e_sex, &e.g_sal) != EOF)
    {
        if (e.e_num != s_num)
            fprintf(temp, "%d %s %s %d \n", e.e_num, e.e_name, e.e_sex, e.g_sal);
    }
    fclose(fs);
    fclose(temp);
    remove("Employee Records.DAT");
    rename("Temp Records.DAT", "Employee Records.DAT");
}
void update(int s_num, int new_g_sal)
{
    {
        FILE *fs, *temp;
        struct employee e;
        fs = fopen("Employee Records.DAT", "rb+");
        if (fs == NULL)
        {
            printf("\nCannot Open the File Master File...");
            exit(1);
        }
        temp = fopen("Temp Records.DAT", "wb");
        if (fs == NULL)
        {
            printf("\nCannot Open the File Temporary File...");
            fclose(fs);
            exit(1);
        }
        while (fscanf(fs, "%d %s %s %d", &e.e_num, e.e_name, e.e_sex, &e.g_sal) != EOF)
        {
            if (e.e_num == s_num)
            {
                e.g_sal = new_g_sal;
                fprintf(temp, "%d %s %s %d \n", e.e_num, e.e_name, e.e_sex, e.g_sal);
            }
            else
                fprintf(temp, "%d %s %s %d \n", e.e_num, e.e_name, e.e_sex, e.g_sal);
        }
        fclose(fs);
        fclose(temp);
        remove("Employee Records.DAT");
        rename("Temp Records.DAT", "Employee Records.DAT");
    }
}
int main()
{
    int i;
    char ch;
    system("cls");
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
start:
    while (1)
    {
        printf("\n1. Add Data\n");
        printf("2. Display\n");
        printf("3. Append\n");
        printf("4. Delete\n");
        printf("5. Update Salary\n");
        printf("6. Exit\n");
        printf("7. Clear Screen\n");
        printf("Enter Your Choice: ");
        fflush(stdin);
        // scanf("%d", ch);
        ch = getchar();
        switch (ch)
        {
        case '1':
        {
            int e_num, g_sal;
            char e_name[30], e_sex[10];
            for (i = 0; i < LEN; i++)
            {
                printf("\n\tEntry For Employee - %d\n", i + 1);
                printf("Employee Number: ");
                scanf("%d", &e_num);
                printf("Employee Name: ");
                scanf("%s", e_name);
                printf("Employee Sex: ");
                scanf("%s", e_sex);
                printf("Employee Gross Salary: ");
                scanf("%d", &g_sal);
                add_info(e_num, e_name, e_sex, g_sal);
            }
            break;
        }
        case '2':
            printf("\n\n\tDisplaying the Records of Employee: \n");
            display();
            printf("\nPress Anything To Exit....");
            _getch();
            break;
        case '3':
        {
            int e_num, g_sal, a_len;
            char e_name[30], e_sex[10];
            printf("\nHow many Records to Append: ");
            scanf("%d", &a_len);
            for (i = 0; i < a_len; i++)
            {
                printf("\n\tEntry For Employee - %d\n", i + 1);
                printf("Employee Number: ");
                scanf("%d", &e_num);
                printf("Employee Name: ");
                scanf("%s", e_name);
                printf("Employee Sex: ");
                scanf("%s", e_sex);
                printf("Employee Gross Salary: ");
                scanf("%d", &g_sal);
                add_info(e_num, e_name, e_sex, g_sal);
            }
            break;
        }
        case '4':
        {
            int serial_no;
            printf("\nEnter The Serial No of the Employee: ");
            scanf("%d", &serial_no);
            delete (serial_no);
            break;
        }
        case '5':
        {
            int serial_no, n_gsal;
            printf("\nEnter The Serial No of the Employee: ");
            scanf("%d", &serial_no);
            printf("\nEnter the New Gross Salary: ");
            scanf("%d", &n_gsal);
            update(serial_no, n_gsal);
            break;
        }
        case '6':
            exit(1);
        case '7':
            system("cls");
            goto start;
        default:
            printf("\nEnter A valid Choice Buddy...\n");
            break;
        }
    }
    printf("Enter Anything to exit..");
    getch();
    return 0;
}
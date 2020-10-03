#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#define size 2
struct engine
{
    char serial_no[10];
    char yom[10];
    char matrial[20];
    float quality_rt;
};
void show(struct engine *e)
{
    printf("\nSERIAL NO: %s \n", e->serial_no);
    printf("YEAR OF MANUFACTURE: %s\n", e->yom);
    printf("MATERIAL: %s\n", e->matrial);
    printf("QUALITY RATING: %0.2f\n", e->quality_rt);
}

int main()
{
    int i, ch, flag;
    char ans = 'y', temp[10];
    struct engine e[size];
    struct engine *ptr;
    system("cls");
    printf("Enter the details:-\n");
    for (i = 0; i < size; i++)
    {
        ptr = &e[i];
        printf("\t ENGINE %d", i + 1);
        fflush(stdin);
        printf("\nSERIAL NO: ");
        scanf("%s", &ptr->serial_no);
        printf("YEAR OF MANUFACTURE: ");
        scanf("%s", &ptr->yom);
        printf("MATERIAL: ");
        scanf("%s", &ptr->matrial);
        printf("QUALITY RATING: ");
        scanf("%f", &ptr->quality_rt);
    }
    printf("\nSuccessfully Added!");
    do
    {
        printf("Enter Your Choice:\n");
        printf("1. Show All\n");
        printf("2. Show Particular Details\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (i = 0; i < size; i++)
                show(&e[i]);
            break;
        case 2:
            printf("\nEnter the serial Number: ");
            scanf("%s", &temp);
            flag = 0;
            for (i = 0; i < size; i++)
            {
                if (strcmp(e[i].serial_no, temp) == 0)
                {
                    show(&e[i]);
                    flag = 1;
                }
            }
            if (flag != 1)
                printf("\nNo Record Found");
            break;
        default:
            printf("Enter a valid choice!!");
        }
        while (getchar() != '\n')
            ;
        printf("\nWant to enter another name (y/n) : ");
        scanf("%c", &ans);
    } while (ans == 'y');
    printf("\nEnter anything to exit...");
    getch();
    return 0;
}
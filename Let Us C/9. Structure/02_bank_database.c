#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define SIZE 3
struct bank
{
    int acc_num;
    char name[20];
    int balc;
};
void print_details(struct bank b)
{
    printf("Account Number - %d\nName - %s\nBalance - %d\n\n", b.acc_num, b.name, b.balc);
}
void balance(int *b)
{
    printf("%d\n", b);
}
int main()
{
    struct bank b[SIZE];
    struct bank *ptr;
    int i, ch, temp_acc, temp_balc;
    char ans = 'y';
    system("cls");
    printf("Enter the detils!\n");
    printf("Account Number \tName \tBalance\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("Customer - %d\n", i);
        fflush(stdin);
        scanf("%d %s %d", &b[i].acc_num, &b[i].name, &b[i].balc);
    }
    do
    {
        printf("1. To Print the Account Number & Name of customer with balance below 100\n");
        printf("2. Deposit\n");
        printf("3. Withdrawl\n");
        printf("4. Display Balance\n");
        printf("5. Display All Account\n");
        printf("Enter your choice:- ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (i = 0; i < SIZE; i++)
                if (b[i].balc < 100)
                    print_details(b[i]);
            break;
        case 2:
            printf("Enter the Account Number:-\n");
            scanf("%d", &temp_acc);
            printf("\nEnter the ammout you want to Deposit: ");
            scanf("%d", &temp_balc);
            for (i = 0; i < SIZE; i++)
            {
                ptr = &b[i];
                if (ptr->acc_num == temp_acc)
                    ptr->balc += temp_balc;
            }
            printf("\nDEPOSITE SUCCESS!!\n");
            printf("Remaining Balance\n");
            balance(ptr->balc);
            break;
        case 3:
            printf("Enter the Account Number:-\n");
            scanf("%d", &temp_acc);
            printf("Enter the ammout you want to withdraw: ");
            scanf("%d", &temp_balc);
            for (i = 0; i < SIZE; i++)
            {
                ptr = &b[i];
                if (ptr->acc_num == temp_acc)
                    ptr->balc -= temp_balc;
            }
            printf("\nWIRHDRAW SUCCESS!!\n");
            printf("Remaining Balance\n");
            balance(ptr->balc);
            break;
        case 4:
            printf("Enter the Account Number to display:-\n");
            scanf("%d", &temp_acc);
            for (i = 0; i < SIZE; i++)
            {
                ptr = &b[i];
                if (ptr->acc_num == temp_balc)
                    balance(ptr->balc);
            }
            break;
        case 5:
            for (i = 0; i < SIZE; i++)
                print_details(b[i]);
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
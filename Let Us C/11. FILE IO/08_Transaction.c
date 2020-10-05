#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
struct customer
{
    int accno;
    char name[30];
    float balance;
};
struct transactions
{
    int accno;
    char trans_type;
    float amount;
};
void add_info(int a_num, char *name, float bacl)
{
    FILE *fs;
    struct customer acc_holder;
    fs = fopen("CUSTOMER.DAT", "rb");
    if (fs == NULL)
    {
        fs = fopen("CUSTOMER.DAT", "wb");
        puts("(ADD_INFO)CUSTOMER.DAT cannot be opened!");
        exit(1);
    }

    acc_holder.accno = a_num;
    strcpy(acc_holder.name, name);
    acc_holder.balance = bacl;
    fwrite(&acc_holder, sizeof(acc_holder), 1, fs);
    fseek(fs, 0, SEEK_END);
    fclose(fs);
}
void display(char *file)
{
    FILE *fs;
    struct customer acc_holder;
    fs = fopen(file, "rb");
    if (fs == NULL)
    {
        puts("CUSTOMER.DAT cannot be opened!");
        exit(1);
    }
    while (fread(&acc_holder, sizeof(acc_holder), 1, fs) == 1)
    {
        // printf("%d\n%s\n%f \n", acc_holder.accno, acc_holder.name, acc_holder.balance);
        printf("\n");
        printf("%d", acc_holder.accno);
        printf("%s", acc_holder.name);
        printf("%f", acc_holder.balance);
    }
    fclose(fs);
}
void update(int accno, char trans_type, float amount)
{
    FILE *fs, *temp;
    struct customer acc_holder;
    fs = fopen("CUSTOMER.DAT", "rb");
    temp = fopen("TEMP.DAT", "wb");
    if (fs == NULL)
    {
        puts("CUSTOMER.DAT cannot be opened!");
        exit(1);
    }
    while (fread(&acc_holder, sizeof(acc_holder), 1, fs) == 1)
    {
        if (acc_holder.accno == accno)
        {
            switch (trans_type)
            {
            case 'D':
            case 'd':
                acc_holder.balance += amount;
                break;
            case 'W':
            case 'w':
                if ((acc_holder.balance - amount) < 100)
                {
                    printf("\nYour account balance is low.\n");
                    printf("Transaction failed!!");
                }
                else
                    acc_holder.balance -= amount;
                break;
            default:
                puts("Wrong transaction type!!");
                puts("\nTry Again!!");
                fclose(fs);
                fclose(temp);
                remove("TEMP.DAT");
                break;
            }
        }
        fwrite(&acc_holder, sizeof(acc_holder), 1, temp);
    }
    fclose(fs);
    fclose(temp);
    remove("CUSTOMER.DAT");
    rename("TEMP.DAT", "CUSTOMER.DAT");
}
int main()
{
    int len, accno, ch;
    char name[30], trans_type;
    float balc, amount;

    //Changing the Directory
    chdir("C:\\Users\\SUBHADEEP\\Desktop");

    system("cls");
start:
    while (1)
    {
        printf("1. Add Info\n");
        printf("2. Display\n");
        printf("3. Update\n");
        printf("4. Exit\n");
        printf("5. Clear Screen\n");
        printf("Enter your choice: ");
        fflush(stdin);
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("How many records do you want to enter: ");
            scanf("%d", &len);
            for (int i = 0; i < len; i++)
            {
                puts("\nEnter Account Number: ");
                scanf("%d", &accno);
                fflush(stdin);
                puts("Enter Name: ");
                gets(name);
                puts("Enter Account Balance: ");
                scanf("%f", &balc);
                add_info(accno, name, balc);
            }
            display("CUSTOMER.DAT");
            break;
        }
        case 2:
            display("CUSTOMER.DAT");
            break;
        case 3:
            puts("\nEnter Account No: ");
            scanf("%d", &accno);
            puts("Enter Transaction Type D = Deposit/ W = Withdrawl: ");
            trans_type = getche();
            puts("Enter Anount: ");
            scanf("%f", &amount);
            update(accno, trans_type, amount);
            break;
        case 4:
            exit(0);
        case 5:
            system("cls");
            goto start;
        default:
            puts("\nEner a Valid Choice");
            break;
        }
    }
    printf("\nEnter anything to exit: ");
    getch();
    return 0;
}

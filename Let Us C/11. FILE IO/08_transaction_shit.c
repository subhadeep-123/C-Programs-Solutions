#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
void display(char *);
void addinfo(int, char *, float);
void transaction(int, char, float);
struct customer
{
    int accno;
    char name[30];
    float balc;
};
struct trans
{
    int accno;
    char trans_type;
    float amount;
};
int main()
{
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    addinfo(1234, "Subhadeep Banerjee", 10000000);
    addinfo(2345, "Suvhradip Ghosh", 1000);
    addinfo(3456, "Shubham Nag", 500);
    addinfo(4567, "Rajarshee Bhadra", 10000);
    addinfo(5678, "Soumya Mitra", 10000000);
    puts("\n\tBefore Transaction");
    display("customer.dat");
    transaction(1234, 'd', 200000);
    puts("\n\tAfter Transaction");
    display("customer.dat");
    printf("\nEnter any key.. ");
    getch();
    return 0;
}
void display(char *file)
{
    FILE *fp;
    struct customer holder;
    fp = fopen(file, "rb");
    while (fread(&holder, sizeof(holder), 1, fp) == 1)
    {
        printf("\n%d", holder.accno);
        printf("\t%s", holder.name);
        printf("\t%f", holder.balc);
    }
    fclose(fp);
}
void addinfo(int accno, char *name, float bal)
{
    FILE *fp;
    struct customer holder;
    fp = fopen("customer.dat", "rb");
    if (fp == NULL)
        fp = fopen("customer.dat", "wb");
    fseek(fp, 0, SEEK_END);
    holder.accno = accno;
    strcpy(holder.name, name);
    holder.balc = bal;
    fwrite(&holder, sizeof(holder), 1, fp);
    fclose(fp);
}

void transaction(int accno, char ttype, float amount)
{
    FILE *fp, *temp;
    struct customer holder;
    fp = fopen("customer.dat", "rb");
    temp = fopen("temp.dat", "wb");
    while (fread(&holder, sizeof(holder), 1, fp) == 1)
    {
        if (holder.accno == accno)
        {
            switch (ttype)
            {
            case 'd':
            case 'D':
                holder.balc += amount;
                break;
            case 'w':
            case 'W':
                if ((holder.balc - amount) < 100)
                {
                    system("cls");
                    printf("\nYour account balance is low.\n");
                    printf("Transaction failed!!");
                    _getch();
                }
                else
                    holder.balc -= amount;
                break;
            default:
                system("cls");
                puts("Wrong transaction type!!");
                puts("\nTry Again!!");
                fclose(fp);
                fclose(temp);
                remove("temp.dat");
                return;
            }
        }
        fwrite(&holder, sizeof(holder), 1, temp);
    }
    fclose(fp);
    fclose(temp);
    remove("customer.dat");
    rename("temp.dat", "customer.dat");
}
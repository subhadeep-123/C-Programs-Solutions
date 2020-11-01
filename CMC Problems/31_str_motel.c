#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define LEN 3

typedef unsigned short int USI;
typedef struct motel
{
    char name[20];
    USI class;
    USI avg_rc;
    USI r_no;

} MTL;
MTL m[LEN];
enum category
{
    ordinary,
    delux,
    super_delux
};
void disp_cw()
{
    auto USI i;
    printf("\n\nEnter the Category:-\n1. Ordinary\n2. Delux\n3. Super Delux\n");
    scanf("%hu", &i);
    --i;
    if (i >= 0 && i <= LEN)
    {
        printf("\n\nName: %s", m[i].name);
        printf("\nRoom Classification: %u", m[i].class);
        printf("\nAverage Room Charge: %u", m[i].avg_rc);
        printf("\nRoom Number: %u", m[i].r_no);
    }
}
void disp_rcw()
{
    auto USI val, i;
    printf("\n\nEnter the room charge: ");
    scanf("%hu", &val);
    for (i = 0; i < LEN; i++)
        if (m[i].avg_rc < val)
        {
            printf("\n\nName: %s", m[i].name);
            printf("\nRoom Classification: %u", m[i].class);
            printf("\nAverage Room Charge: %u", m[i].avg_rc);
            printf("\nRoom Number: %u", m[i].r_no);
        }
}
void display()
{
    printf("\t\tPrinting the value from the Structure:");
    for (int i = 0; i < LEN; i++)
    {
        printf("\n\nName: %s", m[i].name);
        printf("\nRoom Classification: %u", m[i].class);
        printf("\nAverage Room Charge: %u", m[i].avg_rc);
        printf("\nRoom Number: %u", m[i].r_no);
    }
}
int main()
{
    int i;
    system("cls");
    //One
    strcpy(m[0].name, "Motel 1");
    m[0].class = ordinary;
    m[0].avg_rc = 400;
    m[0].r_no = 20;
    //Two
    strcpy(m[1].name, "Motel 2");
    m[1].class = delux;
    m[1].avg_rc = 800;
    m[1].r_no = 14;
    //Three
    strcpy(m[2].name, "Motel 3");
    m[2].class = super_delux;
    m[2].avg_rc = 1500;
    m[2].r_no = 2;

    display();  //Display All
    disp_cw();  //Display Data Category Wise
    disp_rcw(); //Display Data Room Charge Wise
    puts("\n\nEnter anything to exit...");
    getch();
    return 0;
}
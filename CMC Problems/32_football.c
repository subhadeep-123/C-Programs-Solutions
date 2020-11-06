#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define LEN 3
typedef unsigned short int USI;

typedef struct Football
{
    char name[30];
    char tname[20];
    USI avg_no_goals;

} PLAYER;
PLAYER p[LEN];
int cmpfnc(const void *p, const void *q)
{
    return strcmp(((PLAYER *)p)->name, ((PLAYER *)q)->name);
}
void display()
{
    printf("\t\tPrinting Data\n");
    for (int i = 0; i < LEN; i++)
    {
        printf("\nName: %s", p[i].name);
        printf("\nTeam Name: %s", p[i].tname);
        printf("\nAverage No. Of Goals Scored: %u", p[i].avg_no_goals);
    }
}
int main()
{
    int i;
    system("cls");
    printf("Enter the Value in the Football Structure!!\n");
    for (i = 0; i < LEN; i++)
    {
        printf("\nEnter for Player %d\n", i + 1);
        printf("Name: ");
        scanf("%s", p[i].name);
        printf("Team Name: ");
        scanf("%s", p[i].tname);
        printf("Average No. Of Goals Scored: ");
        scanf("%u", &p[i].avg_no_goals);
    }
    display();
    qsort(p, LEN, sizeof(PLAYER), cmpfnc);
    display();
    puts("\n\nEnter anything to exit...");
    getch();
    return 0;
}
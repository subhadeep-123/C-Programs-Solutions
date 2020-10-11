#include <stdio.h>
#include <stdlib.h>
#define _BV(x) (1 << x)
int bintodec(int *num)
{
    int i, dec = 0;
    for (i = 0; i <= 8; i++)
        dec += num[i] * (int)pow(2, 8 - i);
    return dec;
}

void initinfo(int *information)
{
    int i;
    for (i = 0; i <= 8; i++)
        information[i] = 0;
}
void addinfo(int *information)
{
    int choice, info[9];
    printf("\nChoose your economical class\n");
    printf("1. Upper Class\n2. Middle Class\n");
    printf("3. Lower Class\n");
    scanf("%d", &choice);
    initinfo(info);
    switch (choice)
    {
    case 1:
        info[0] = 1;
        break;
    case 2:
        info[1] = 1;
        break;
    case 3:
        info[2] = 1;
    default:
        break;
    }
    printf("\nChoose your language\n");
    printf("1. English\n2. Hindi\n3. Regional\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        info[3] = 1;
        break;
    case 2:
        info[4] = 1;
        break;
    case 3:
        info[5] = 1;
        break;
    default:
        break;
    }
    printf("\nChoose your newspaper category\n");
    printf("\n1. Daily\n2. Supplement\n3. Tabloid\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        info[6] = 1;
        break;
    case 2:
        info[7] = 1;
        break;
    case 3:
        info[8] = 1;
        break;
    default:
        break;
    }
    *information = bintodec(info);
    system("cls");
}

int main()
{
    int i, response[10];
    unsigned char j, k, andmask;
    int eng_daily, upclass_tabloid, reg_redr;
    eng_daily = upclass_tabloid = reg_redr = 0;
    //000100100 - Only English Reader
    //100000001 - Upper Class People That Read Tablod
    //000001000 - Regianal Reader

    for (i = 0; i < 10; i++)
    {
        addinfo(&response);
        andmask = _BV(2) | _BV(5);
        j = response[i] & andmask;
        if (j == andmask)
            eng_daily++;
        andmask = _BV(0) | _BV(8);
        j = response[i] & andmask;
        if (j == andmask)
            upclass_tabloid++;
        andmask = _BV(3);
        j = response[i] & andmask;
        if (j == andmask)
            reg_redr++;
    }
    printf("\nStatical Data :-\n");
    printf("\nPersons read English newspaper : %d", eng_daily);
    printf("\nPersons belongs to Upper class and read Tabloid are : %d", upclass_tabloid);
    printf("\nPersons read newspaper in regional language are : %d", reg_redr);
    _getch();
    return 0;
}
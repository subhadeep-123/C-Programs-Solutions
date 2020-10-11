#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

#define _BV(x) 1 << x

int bintodec(int *);
void addinfo(int *);

int main()
{
    int game, i, count = 0;
    unsigned int andmask, j;
    addinfo(&game);
    printf("%d", game);
    for (i = 0; i <= 8; i++)
    {
        andmask = _BV(i);
        printf("\n%d ", andmask);
        j = game & andmask;
        if (j == andmask)
            count++;
    }
    if (count >= 5)
        printf("\nYou are eligible for champions trophy.\n");
    else
        printf("\nYou aren't eligible for champions trophy.\n");
    _getch();
    return 0;
}

int bintodec(int *num)
{
    int i, dec = 0;
    for (i = 0; i <= 8; i++)
        dec += num[i] * (int)pow(2, 8 - i);
    return dec;
}

void addinfo(int *game)
{
    int info[9], i;
    printf("1. Cricket\n2. Basketball\n");
    printf("3. Football\n4.Hockey\n");
    printf("5.Lawn Tennis\n6.Table Tennis\n");
    printf("7.Carom\n8.Chess\n9.Kabaddi");
    printf("\nEnter the number of winning of games.");
    printf("Answer given should be in the form of 0 or 1.");
    printf("And should be given\n one by one for each game.\n");
    for (i = 0; i <= 8; i++)
        scanf("%d", &info[i]);
    *game = bintodec(info);
}
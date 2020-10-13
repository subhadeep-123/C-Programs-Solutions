#include <stdio.h>
#include <conio.h>
#include <stdarg.h>
#include <Windows.h>

#define MAX 5

typedef struct date
{
    unsigned d : 5;
    unsigned m : 4;
    unsigned y : 12;
} EMP;

void swap(EMP *, EMP *);

int main()
{

    int i, j;
    EMP e[10], a[10];
    e[0].y = 2010;
    e[0].m = 12;
    e[0].d = 10;

    e[1].y = 1990;
    e[1].m = 3;
    e[1].d = 23;

    e[2].y = 1995;
    e[2].m = 4;
    e[2].d = 13;

    e[3].y = 2001;
    e[3].m = 1;
    e[3].d = 13;

    e[4].y = 1990;
    e[4].m = 3;
    e[4].d = 20;

    e[5].y = 1992;
    e[5].m = 6;
    e[5].d = 19;

    for (i = 0; i < MAX; i++)
        a[i] = e[i];

    for (i = 0; i < MAX; i++)
    {
        for (j = i + 1; j < MAX; j++)
        {
            if (a[j].y < a[i].y)
                swap(&a[i], &a[j]);
            if (a[j].y == a[i].y)
            {
                if (a[j].m < a[i].m)
                    swap(&a[i], &a[j]);
                if (a[j].m == a[i].m)
                    if (a[j].d < a[i].d)
                        swap(&a[i], &a[j]);
            }
        }
    }

    system("cls");
    for (i = 0; i <= 4; i++)
    {
        printf("\nEmplyee no. %d : ", i + 1);
        printf("%2d/%2d/%4d", a[i].d, a[i].m, a[i].y);
    }
    _getch();
    return 0;
}
void swap(EMP *a, EMP *b)
{
    EMP c;
    c = *a;
    *a = *b;
    *b = c;
}
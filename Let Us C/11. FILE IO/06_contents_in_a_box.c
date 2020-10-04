#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <unistd.h>

void getkey();
void gotoxy(short, short);
void box(short, short, short, short);

int main()
{
    box(0, 1, 79, 23);
    FILE *fp;
    char str[85];
    int i, j = 1;
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    fp = fopen("Target.txt", "r");
    if (fp == NULL)
    {
        printf("FIle do not exist, or can't open the file.");
        exit(1);
    }
    i = 2;
    while (fgets(str, 76, fp) != NULL)
    {
        gotoxy(1, 0);
        /*Printing page number*/
        printf("%d", j);
        gotoxy(32, 0);
        /*Printing the file name.*/
        printf("File (f).txt");
        gotoxy(3, i);
        /*Printing the file's content.*/
        printf("%s", str);
        i++;
        if (i == 20)
        {
            gotoxy(32, i + 4);
            printf("Press any key...");
            getkey();
            system("cls");
            box(0, 1, 79, 23);
            /*Re-initializing variable for new page*/
            i = 2;
            /*Page number increamentation*/
            j++;
        }
    }
    getkey();
    system("cls");
    gotoxy(3, 10);
    printf("File Ends\n");
    _getch();
    return 0;
}

void getkey()
{
    char ch;
    ch = _getch();
    if (ch == 0)
        ch = _getch();
}
void gotoxy(short col, short row)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col, row};
    SetConsoleCursorPosition(h, position);
}
void box(short x1, short y1, short x2, short y2)
{
    int i;
    gotoxy(0, 1);
    printf("%c", 218); /*Making upper-left corener*/
    gotoxy(79, 1);
    printf("%c", 191); /*Making upper-right corner*/
    gotoxy(0, 23);
    printf("%c", 192); /*Making lower-left corner*/
    gotoxy(79, 23);
    printf("%c", 217); /*Making lower-right corner*/

    for (i = x1 + 1; i < x2; i++)
    {
        gotoxy(i, y1);
        printf("%c", 196); /*This will make upper side of the box*/
        gotoxy(i, y2);
        printf("%c", 196); /*This will make lower side of the box*/
    }

    for (i = y1 + 1; i < y2; i++)
    {
        gotoxy(x1, i);
        printf("%c", 179); //This will make left side of the box
        gotoxy(x2, i);
        printf("%c", 179); //This will make right side of the box
    }
    getch();
}
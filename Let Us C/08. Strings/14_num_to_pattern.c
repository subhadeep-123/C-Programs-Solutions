#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define VisualStudio
//If using Visual Studio so delete its comment and make above two macro comments
//#define TurboC //If using Turbo C so delete its comment and make above two macro comments
//#define DevC //If using Dev C so delete its comment and make above two macro comments

#define EndofNumber 13 /*For Terminating the array just like strings do*/

int arr[10], x = 0, one_i = 0, two_i = 0, three_i = 0, four_i = 0, five_i = 0, six_i = 0, seven_i = 0, eight_i = 0, nine_i = 0, zero_i = 0;
/*These variables are used in the multiple functions so I defined them globally*/

/*These functions contains the pattern of # makes numbers*/
void one();
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();
void nine();
void zero();

void jumpto(); /*This functions calls the functions which is the next number*/

void rev_arr(int *); /*It will reverse the array*/

void rev_arr(int *array)
{
    int temp[12], i, max, j;
    for (i = 0; array[i] != EndofNumber; i++)
        ;
    /*Counting the total number of elemeents excpet the last EndofNumber*/
    max = i - 1;
    /*Max is the total number of elements,
as the counting starts from 0 so we subtract 1 from it*/
    i = 0;
    for (j = max; j >= 0; j--, i++)
        temp[j] = array[i]; /*temp starting from the last*/
    for (i = 0; i <= max; i++)
        array[i] = temp[i]; /*reversing the */
}

void jumpto()
{
    if (arr[x] == 0)
        zero();
    else if (arr[x] == 1)
        one();
    else if (arr[x] == 2)
        two();
    else if (arr[x] == 3)
        three();
    else if (arr[x] == 4)
        four();
    else if (arr[x] == 5)
        five();
    else if (arr[x] == 6)
        six();
    else if (arr[x] == 7)
        seven();
    else if (arr[x] == 8)
        eight();
    else if (arr[x] == 9)
        nine();
    if (arr[x] == EndofNumber)
    {

        /*First it will print the first line of the each number,
then by increamenting these in loops of individual number will
print the next line*/
        one_i++;
        two_i++;
        three_i++;
        four_i++;
        five_i++;
        six_i++;
        seven_i++;
        eight_i++;
        nine_i++;
        zero_i++;
        x = 0;        /*When the first line of all the numbers has been printed then array
  will initializes again so that we traverse the whole array again for printing the */
        printf("\n"); /*Jump to next line*/
        jumpto();
    }
    return;
}

void one()
{
    int j, k;
    for (; one_i < 8; one_i++)
    {
        if (one_i != 1 && one_i != 7)
            printf(" ");
        if (one_i == 1)
            k = 1;
        else if (one_i == 7)
            k = 2;
        else
            k = 0;
        for (j = 0; j <= k; j++)
            printf("#");
        x++;
        printf("\t");
        jumpto();
    }
}
void two()
{
    int j, k;
    for (; two_i <= 7; two_i++)
    {
        if (two_i > 0 && two_i < 4)
            printf("    ");
        if (two_i == 0 || two_i == 4 || two_i == 7)
            k = 4;
        else
            k = 0;
        for (j = 0; j <= k; j++)
            printf("#");
        x++;
        printf("\t");
        jumpto();
    }
}
void three()
{
    int j, k;
    for (; three_i < 8; three_i++)
    {
        if (three_i == 1 || three_i == 2 || three_i == 4 || three_i == 5 || three_i == 6)
            printf("    ");
        if (three_i == 0 || three_i == 3 || three_i == 7)
            k = 4;
        else
            k = 0;
        for (j = 0; j <= k; j++)
            printf("#");
        x++;
        printf("\t");
        jumpto();
    }
}
void four()
{
    int j, k;
    for (; four_i < 8; four_i++)
    {
        if (four_i == 3)
            printf("# #");
        if (four_i == 5 || four_i == 6 || four_i == 7)
            printf("  ");
        if (four_i == 4)
            k = 4;
        else if (four_i == 3)
            k = -1;
        else
            k = 0;
        for (j = 0; j <= k; j++)
            printf("#");
        x++;
        printf("\t");
        jumpto();
    }
}
void five()
{
    int j, k;
    for (; five_i < 8; five_i++)
    {
        if (five_i > 3 && five_i < 7)
            printf("    ");
        if (five_i == 0 || five_i == 3 || five_i == 7)
            k = 4;
        else
            k = 0;
        for (j = 0; j <= k; j++)
            printf("#");
        x++;
        printf("\t");
        jumpto();
    }
}
void six()
{
    int j, k;
    for (; five_i < 8; five_i++)
    {
        if (five_i > 3 && five_i < 7)
            printf("#   #");
        if (five_i == 0 || five_i == 3 || five_i == 7)
            k = 4;
        else if (five_i > 3 && five_i < 7)
            k = -1;
        else
            k = 0;
        for (j = 0; j <= k; j++)
            printf("#");
        x++;
        printf("\t");
        jumpto();
    }
}
void seven()
{
    for (; seven_i < 8; seven_i++)
    {
        if (seven_i != 0)
            printf("    ");
        if (seven_i == 0)
            printf("#####");
        else
            printf("#");
        x++;
        printf("\t");
        jumpto();
    }
}
void eight()
{
    for (; eight_i < 8; eight_i++)
    {
        if (eight_i == 0 || eight_i == 3 || eight_i == 7)
            printf("#####");
        else
            printf("#   #");
        x++;
        printf("\t");
        jumpto();
    }
}
void nine()
{
    int j, k;
    for (; eight_i < 8; eight_i++)
    {
        if (eight_i < 3 && eight_i > 0)
            printf("#   #");
        if (eight_i == 4 || eight_i == 5 || eight_i == 6)
            printf("    ");
        if (eight_i == 0 || eight_i == 7 || eight_i == 3)
            k = 4;
        else if (eight_i < 3 && eight_i > 0)
            k = -1;
        else
            k = 0;
        for (j = 0; j <= k; j++)
            printf("#");
        x++;
        printf("\t");
        jumpto();
    }
}
void zero()
{
    for (; nine_i < 8; nine_i++)
    {
        if (nine_i == 0 || nine_i == 7)
            printf("#####");
        else
            printf("#   #");
        x++;
        printf("\t");
        jumpto();
    }
}

int main()
{
    int num, i;
    printf("\nEnter a five digit number : ");
    scanf("%d", &num);
    for (i = 0; num != 0; i++)
    {
        arr[i] = num % 10;
        num /= 10;
    }
    arr[i] = EndofNumber; /*Terminating the number*/
    // rev_arr(arr);
    /*Reversing the array again as the number saved in it is already in reverse mode*/

#ifdef TurboC
    clrscr();
#endif
#ifdef VisualStudio
    system("cls");
#endif
#ifdef DevC
    system("cls");
#endif

    printf("\n\n\n");
    jumpto();
    _getch();
    return 0;
}
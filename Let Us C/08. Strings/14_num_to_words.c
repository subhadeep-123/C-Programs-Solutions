#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <malloc.h>

#define EndofNumber 13
#define LastElement i + 2

void rev_arr(int *arr)
{
    int temp[12], i, max, j;
    for (i = 0; arr[i] != EndofNumber; i++)
        /*Counting the total number of elemeents excpet the last EndofNumber*/
        max = i - 1;
    /*Max is the total number of elements,
as the counting starts from 0 so we subtract 1 from it*/
    i = 0;
    for (j = max; j >= 0; j--, i++)
        temp[j] = arr[i]; /*temp starting from the last*/
    for (i = 0; i <= max; i++)
        arr[i] = temp[i]; /*reversing the */
}
int main()
{
    int num, a = 0, arr[12], i;
    char word[90];
    printf("\nEnter the number (max. 9 digits) : ");
    scanf("%d", &num);

    for (i = 0; num != 0; i++)
    {
        arr[i] = num % 10;
        num /= 10;
    }
    /*Seperating the digits and saving the number in array*/

    arr[i] = EndofNumber; /*Terminating array*/

    rev_arr(arr); /*The numebrs in the array are saving in the  reverse mode
 as the saperation of the digits are takes place from last,
 so we will reverse the numbers of the array but EndofNumber will have the same
 position*/

    printf("\n\n\nNumber in words : ");

    for (i = 0; arr[i] != EndofNumber; i++) /*Traversing the whole array.*/
    {
        if (arr[i + 5] == EndofNumber || arr[i + 7] == EndofNumber || arr[i + 9] == EndofNumber || arr[i + 2] == EndofNumber)
        {
            if (arr[i] == 1)
            {
                if (arr[i + 1] == 1)
                    printf("Eleven ");
                if (arr[i + 1] == 2)
                    printf("Twelve ");
                if (arr[i + 1] == 3)
                    printf("Thirteen ");
                if (arr[i + 1] == 4)
                    printf("Fourteen ");
                if (arr[i + 1] == 5)
                    printf("Fifteen ");
                if (arr[i + 1] == 6)
                    printf("Sixteen ");
                if (arr[i + 1] == 7)
                    printf("Seventeen ");
                if (arr[i + 1] == 8)
                    printf("Eighteen ");
                if (arr[i + 1] == 9)
                    printf("Ninteen ");
                if (arr[i + 1] == 0)
                    printf("Ten ");

                i++;
                /*If we continue so these below words will not print as the loop is continueing from here.*/

                if (arr[i + 10] == EndofNumber)
                    printf("Arab ");
                if (arr[i + 8] == EndofNumber)
                    printf("Crore ");
                if (arr[i + 6] == EndofNumber)
                    printf("Lac ");
                if (arr[i + 4] == EndofNumber)
                    printf("Thousand ");
                if (arr[i + 3] == EndofNumber)
                    printf("Hundred ");

                continue;
            }
            if (arr[i] == 2)
                printf("Twenty ");
            if (arr[i] == 3)
                printf("Thirty ");
            if (arr[i] == 4)
                printf("Fourty ");
            if (arr[i] == 5)
                printf("Fifty ");
            if (arr[i] == 6)
                printf("Sixty ");
            if (arr[i] == 7)
                printf("Seventy ");
            if (arr[i] == 8)
                printf("Eighty ");
            if (arr[i] == 9)
                printf("Ninety ");
        }
        else
        {
            if (arr[i] == 1)
                printf("One ");
            if (arr[i] == 2)
                printf("Two ");
            if (arr[i] == 3)
                printf("Three ");
            if (arr[i] == 4)
                printf("Four ");
            if (arr[i] == 5)
                printf("Five ");
            if (arr[i] == 6)
                printf("Six ");
            if (arr[i] == 7)
                printf("Seven ");
            if (arr[i] == 8)
                printf("Eight ");
            if (arr[i] == 9)
                printf("Nine ");
        }

        if (arr[i + 10] == EndofNumber)
            printf("Arab ");
        if (arr[i + 8] == EndofNumber)
            printf("Crore ");
        if (arr[i + 6] == EndofNumber)
            printf("Lac ");
        if (arr[i + 4] == EndofNumber)
            printf("Thousand ");
        if (arr[i + 3] == EndofNumber)
            printf("Hundred ");
    }
    printf("\n");
    _getch();
    return 0;
}
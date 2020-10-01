#include <Stdio.h>
#include <stdbool.h>
#include <conio.h>
#define LEN 16
int len(char *arr)
{
    int num = 0;
    while (*arr++ != '\0')
    {
        num += 1;
    }
    return num;
}
void str_to_int_array(char *arr, int *list)
{
    while (*arr != '\0')
    {
        *list++ = *arr++ - '0';
    }
}
int isValid(char *arr)
{
    if (len(arr) != 16)
        return false;
    else
    {
        int list[LEN];
        int i;
        str_to_int_array(arr, list);
        int even_sum = 0;
        int j = 0;
        for (i = 0; i < LEN / 2; i++)
        {
            even_sum += list[j] * 2 >= 10 ? (list[j] * 2) - 9 : list[j] * 2;
            j = j + 2;
        }
        int odd_sum = 0;
        j = 1;
        for (i = 0; i < LEN / 2; i++)
        {
            odd_sum += list[j];
            j = j + 2;
        }
        if ((odd_sum + even_sum) % 10 == 0)
            return true;
        else
            return false;
    }
}
int main()
{
    char arr[] = "4567123456789129";
    printf(isValid(arr) ? "Valid" : "Not Valid");
    printf("\nEnter any key to exit...");
    getch();
    return 0;
}
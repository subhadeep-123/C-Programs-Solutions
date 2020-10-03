#include <Stdio.h>
#include <stdbool.h>
#include <conio.h>
#define LEN 10
int len(char *arr)
{
    int num = 0;
    while (*arr++ != '\0')
    {
        num += 1;
    }
    return num;
}
int isValid(char *arr)
{

    int sum = 0;
    if (len(arr) != 10)
        return false;
    else
    {
        int n = 10;
        int i;
        for (i = 0; i < LEN - 1; i++)
        {
            int temp = *arr++ - '0';
            sum += n * temp;
            n--;
        }
        //Now Sum is 166
        char lst;
        while (*arr != '\0')
        {
            lst = *arr++;
        }
        if (lst == 'X')
            sum += 10;
        else
            sum += (lst - '0');
    }
    if (sum % 11 != 0)
        return false;
    else
        return true;
}
int main()
{
    char isbn[] = "007462542X";
    printf(isValid(isbn) ? "VALID" : "NOT VALID");
    printf("\nEnter any key to exit...");
    getch();
    return 0;
}
// #include <stdio.h>
// void fibo(int len)
// {
//     int i, j;
//     char ch = 'a';
//     for (i = 1; i <= len; i++)
//     {
//         ch = 'a';
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c", ch);
//             ch++;
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     printf("The series is:-\n");
//     fibo(5);
//     return 0;
// }
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char x[50] = "a", z[50];
    char y[50] = "b";
    int i;
    for (i = 0; i <= 5; i++)
    {
        printf("%s\t", x); //printing x
        strcpy(z, x);      /*copying x into z*/
        strcpy(x, y);      /*copying y into x*/
        strcat(y, z);      /*adding (concatinating) z in y*/
    }
    _getch();
    return 0;
}
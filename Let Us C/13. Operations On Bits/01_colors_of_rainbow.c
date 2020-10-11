#include <stdio.h>
#include <stdlib.h>
void showbits(unsigned char n)
{
    int i;
    unsigned char andmask, k, j;
    for (i = 0; i <= 6; i++)
    {
        j = i;
        andmask = 1 << j;
        k = n & andmask;
        // k == 0 ? printf("0") : printf("1");
        if (k > 0)
        {
            switch (i)
            {
            case 0:
                printf("Violet, ");
                break;
            case 1:
                printf("Indigo, ");
                break;
            case 2:
                printf("Blue, ");
                break;
            case 3:
                printf("Green, ");
                break;
            case 4:
                printf("Yellow, ");
                break;
            case 5:
                printf("Orange, ");
                break;
            case 6:
                printf("Red, ");
                break;
            default:
                break;
            }
        }
    }
}
int main()
{
    unsigned char color;
    system("cls");
    printf("Enter a number between 1 - 7:  ");
    scanf("%u", &color);
    // printf("%d\n\n", color);
    showbits(color);
}
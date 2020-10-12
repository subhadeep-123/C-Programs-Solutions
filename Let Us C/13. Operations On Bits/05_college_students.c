#include <Stdio.h>
#include <stdlib.h>
#define _BV(x) (1 << x)

int dec_to_bin(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2 + 10 * dec_to_bin(n / 2));
}
int main()
{
    int data[] = {273, 548, 786, 1096};
    int len = sizeof(data) / sizeof(int);
    int bin = 0;
    unsigned char j, k, andmask;
    //Checking for Year
    //If Bit 0 if no then 1st year
    //If Bit 1 if no then 2nd year
    //If Bit 2 if no then 3rd year
    //If Bit 3 if no then 4th year

    //Checking For Branch
    //If Bit 4 is on then ME
    //If Bit 5 is on then CE
    //If Bit 6 is on then ECE
    //If Bit 7 is on then IT

    printf("\n");
    for (int i = 0; i <= 7; i++)
    {
        for (int j = 0; j < len; j++)
        {
            bin = dec_to_bin(data[j]);
            andmask = _BV(i);
            k = bin & andmask;
            if (k == andmask)
            {
                switch (i)
                {
                case 0:
                    printf("1st Year, ");
                    break;
                case 1:
                    printf("2nd Year, ");
                    break;
                case 2:
                    printf("3rd Year, ");
                    break;
                case 3:
                    printf("4th Year, ");
                    break;
                case 4:
                    printf("Mechanical Engineer\n ");
                    break;
                case 5:
                    printf("Chemical Engineer\n ");
                    break;
                case 6:
                    printf("Electronis Engineer\n ");
                    break;
                case 7:
                    printf("Information Technology\n ");
                    break;
                default:
                    break;
                }
            }
        }
    }
}
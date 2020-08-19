#include<stdio.h>
#include<conio.h>
int main()
{
    int year=0, invest=0, alternate=1;

    while(alternate>invest)
    {
        year++;  //year = year + 1;

        // yearly produce income form alternate solution
        // 9 % of 1000 = 90
        alternate = year * 90;

        // yearly produced income from machine
        // 1000 per year - [6000(machine cost) - 2000(salvage or scrap value of machine)]
        // 1000 * year - [6000-2000]
         invest = (1000*year) - 4000;

    }

    printf("The Life of Machine: %d years", year);

}

#include<stdio.h>
#include<conio.h>
int main()
{
    int count = 1, working_hours, over_time;
    float over_time_pay;

    while(count<=10)
    {
        printf("Enter the working hours of employee no %d: ", count);
        scanf("%d", &working_hours);
        if(working_hours>40)
        {
            over_time = working_hours - 40;
            over_time_pay = over_time * 12.00;
            printf("Employee No %d overtime pay is %.2f\n", count, over_time_pay);
        }
        else
            printf("You have to work for more than 40 hours to get over time pay\n");

        count++;
    }
}

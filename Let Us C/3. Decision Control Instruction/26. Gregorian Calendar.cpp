#include<stdio.h>
int main(){
	int year, diff, leap_years, total_days, day;
	printf("Print the Year");
	scanf("%d",&year);
	diff = year % 100;
	leap_years = diff / 4;
	total_days = diff * 365 + leap_years;
	day = total_days % 7;
	if(day==0){
		printf("Monday");
	}
	else if(day==1){
		printf("Tuesday");
	}
	else if(day==2){
		printf("Wednesday");
	}
	else if(day==3){
		printf("Thursday");
	}
	else if(day==4){
		printf("Friday");
	}
	else if(day==5){
		printf("Saturday");
	}
	else{
		printf("Sunday");
	}
}


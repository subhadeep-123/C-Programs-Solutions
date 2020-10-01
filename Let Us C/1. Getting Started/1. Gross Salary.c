#include<stdio.h>
int main()
{
	int b_sal, g_sal, hra, da ;
	printf("Ramesh Enter Your Salary:- \n");
	scanf("%d",&b_sal);
	hra = (b_sal / 100) * 20;
	da = (b_sal / 100) * 40;
	g_sal = b_sal + hra + da;
	printf("The Gross Salary is: %d",g_sal);
	return 0;
	
}

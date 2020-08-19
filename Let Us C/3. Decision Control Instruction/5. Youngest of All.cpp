#include<stdio.h>
#include<stdio.h>
int main()
{
	int ram, shm, ajy;

	printf("Enter The age of RAM:-\n");
	scanf("%d",&ram);
	
	printf("Enter The age of SHYAMM:-\n");
	scanf("%d",&shm);
	
	printf("Enter The age of AJAY:-\n");
	scanf("%d",&ajy);
	
	printf("\nEntered Ages:- \nRAM - %d\nSHYAMM - %d\nAJAY - %d",ram,shm,ajy);
	
	if(ram >= shm)
	{
		if(shm>=ajy)
		{
			printf("\n\nAJAY is the Youngest");
		}
		else
		{
			printf("\n\nSHYAM is the Youngest");	
		}
	}
	else
	{
		printf("\n\nRAM is the Youngest");
	}
	
	return 0;
}

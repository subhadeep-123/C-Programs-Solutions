#include<stdio.h>
int main()
{
	int m = 21, p, c;
	while(1)
	{
		printf("\nNumber of Match sticks left = %d\n", m);  
        printf("Pick 1 or 2 or 3 or 4 matches\n"); 
		scanf("%d",&p);
		if(p > 4 || p < 1)
			printf("WRONG PICK!!\n\n");
			continue;
			
			m = m - p;
			
			printf("No of Matches Left = %d\n",m);
			
			c = 5 - p;
			
			printf("Out of Which Computer Picked up %d\n",c);
			
			m = m - c;
			
			if(m == 1)
			{
				printf("\nNumber of Matches left = %d\n",m);
				printf("You Lost");
				break;	
			}
			
	}	
	return 0;
}

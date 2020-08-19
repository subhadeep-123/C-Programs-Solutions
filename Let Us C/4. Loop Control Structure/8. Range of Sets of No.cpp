#include<stdio.h>
#include<stdlib.h>
int main()
{
	int small, big, num, lim, range;
	printf("Enter a Limit:-\n");
	scanf("%d",&lim);
	
	printf("Enter %d numbers:\n",lim);
	scanf("%d",&num);
	
	small = big = num;
	
	lim = lim - 1;
	
	while(lim)
	{
		scanf("%d",&num);
		
		if(num>big)
		{
			big =num;
		}
		else if(num<small)
		{
			small = num;
		}
		lim--;
	}
	range = big - small;
	
	printf("Small Number = %d\nBig Number = %d\n", small, big);  
    printf("Range is %d\n", abs(range));  
  
    return 0;  
}  

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch,num,i,fact = 1,flag = 0;
	while(1)
	{
		printf("Enter Your Choice: \n1. Factorial of a Number \n2. Prime or Not \n3. Even or Odd \n4. Exit\n");
		scanf("%d",&ch);
		if(ch<4)
		{
			printf("Enter a Number:-\n");
			scanf("%d",&num);
		}
		switch(ch)
		{
			case 1:
				while(num>0)
				{
					fact *= num;
					num--;
				}
				printf("Factorial of %d is %d\n\n",num,fact);
				break;
			case 2:
				for(i=2;i<=num/2;++i)
				{
					if(num%i==0)
					{
						flag = 1;
						break;
					}
				}
				if(num==1)
				{
					printf("1 is neither prime nor composite.\n\n");
				}
				else
				{
					if(flag==0)
						printf("%d is a Prime Number\n\n",num);
					else
						printf("%d is not a Prime Number\n\n",num);
				}
				break;
			case 3:
				if(num%2==0)
				{
					printf("%d is Even\n\n", num);
				}
				else
				{
					printf("%d is Odd\n\n",num);
				}
				break;
			case 4:
				exit(1);
			default:
				printf("Enter a valid choice!!\n\n");
		}
	}
}

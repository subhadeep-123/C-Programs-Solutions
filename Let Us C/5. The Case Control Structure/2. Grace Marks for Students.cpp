#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c,num;
	while(1)
	{
		printf("Enter the Class Obtained:\nPress 4 To exit\n");
		scanf("%d",&c);
		
		switch(c)
		{
			case 1:
				printf("Enter the no.of Subjects You've failed:\n");
				scanf("%d",&num);
				if(num>3)
				printf("No Grace Marks\n");
				else
				printf("Grace is 5 marks per subject\n");
				break;
			case 2:
				printf("Enter the no.of Subjects You've failed:\n");
				scanf("%d",&num);
				if(num>2)
				printf("No Grace Marks\n");
				else
				printf("Grace is 4 marks per subject\n");
				break;
			case 3:
				printf("Enter the no.of Subjects You've failed:\n");
				scanf("%d",&num);
				if(num>1)
				printf("No Grace Marks\n");
				else
				printf("Grace is 5 marks per subject\n");
				break;
			case 4:
				exit(1);
			default:
				printf("Please Enter a valid choice\n");
		}
	}
}

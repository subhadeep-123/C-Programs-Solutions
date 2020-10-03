#include<stdio.h>
int main()
{
	int ch=1;
	unsigned long long i;
	i = 1000;
	printf("The Screen is going to be FILLED WITH EMOJIS\n\n");
	while(i)
	{
		printf("%c  ",ch);
		
		--i;
	}
}

#include<stdio.h>
int main()
{
	int ch = 0;
	while(ch < 255)
	{
		printf("\n%d = %c",ch, ch);
		ch++;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int hr;
	for(hr = 0; hr < 24; hr++)
	{
		if(hr==0)
		{
			printf("\n12 Midnight");
		}
		else if(hr>0 && hr<12)
		{
			printf("\n%d AM",hr);
		}
		else if(hr==12)
		{
			printf("\n%d Noon",hr);
		}
		else
		{
			printf("\n%d PM",hr-12);
		}
	}
	return 0;
}

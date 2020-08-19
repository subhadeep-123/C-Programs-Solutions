#include<stdio.h>
#include<math.h>
int main()
{
	//EMI = [P x R x T] / 100
	//P = Loan Amount
	//R = Rate of interest
	//N = Number of months
	float p, r, si;
	int n;
	printf("Enter the Loan amount:-\n");
	scanf("%f",&p);
	printf("Enter the No of Months:-\n");
	scanf("%d",&n);
	printf("Enter the Rate of Interest:-\n");
	scanf("%f",&r);
	
	si = (p * r * n) / 100;
	
	printf ("Principle Amount = %5.2f\n", p);
 	printf ("Rate %% per Annum   = %5.2f%\n", r);
 	printf ("Time   = %d years\n", n);
 	printf ("Simple Interest  = %5.2f\n", si);
}

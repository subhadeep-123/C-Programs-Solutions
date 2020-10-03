#include<stdio.h>
#include<math.h>
#define PI 3.14159
void Funct_Sin(float, int);
double power(float, float);
double Fact(float);

int main()
{
    unsigned int N;
    float X;
    //clrscr();
    printf("Program to Evaluate Sin(x) series\n");
    printf("Enter No. of terms: ");
    scanf("%d",&N);
    printf("Enter value of x: ");
    scanf("%f",&X);
    Funct_Sin(X,N);
}

void Funct_Sin(float x, int n)
{
    float i,y;
    double sum = 0.0;
    y=x;
    x=x*PI/180;    // conversion from degree to radian
    for(i=0;i<n;i++)
    {
        sum = sum + (power((float)-1,(float)i)*power(x,(float)(2*i+1)))/Fact(2*i+1);
    }
    printf("\nSin(%2.2f) = %2.4lf",y,sum);
}double power(float a, float b)
{
    double p;
    if(b==0.0)
        return 1;
    else if(b==1.0)
        return a;
    else
        p = a*power(a,b-1);
    return p;
}

double Fact(float N)
{
    double fact=1.0;
    if(N==1)
        return 1;
    else
        fact = N*Fact(N-1);
    return fact;
}

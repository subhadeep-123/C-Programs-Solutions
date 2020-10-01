#include<stdio.h>
#include<conio.h>
int main()
{
 int num, sum = 0;
 int rem, check = 0;
 printf("Enter the required number:");
 scanf("%d",&num);
 printf("nGiven Number: %d\n",num);
 while(num>0) 
 {
  rem = num % 10;
  if(rem != 9)
  {
   if(check == 0) 
    sum = (10 * sum) + (rem + 1);
   else{
    sum = (10*sum) + (rem + 2);
    check = 0;
   }
  } 
  else{
   sum = (10 * sum) + 0;
   check = 1;
  }
  num = num/10;
 } 

 num = sum; sum=0;
 while(num > 0)
 {
  rem = num % 10;
  sum = (10*sum) + rem;
  num = num / 10;
 }
 printf("nAfter Adding one: %d",sum);
 getch( );
 return 0;
}

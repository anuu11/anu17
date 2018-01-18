#include<stdio.h>
void main()
{
  int n,sum=0,i,a,temp;
  printf("enter number");
  scanf("%d",&n);
  temp=n;
while(n>0)
{
a=n%10;
sum=sum+(a*a*a);
n=n/10;
}
if(temp==sum)
printf("armstrong");
else
printf("not armstrong");
}
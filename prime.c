#include<stdio.h>
void main()
{
int i,n,flag=0;
printf("\n enetr the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("\n the number is prime number");
else 
printf("\n the number is not a prime number");
getch();
}

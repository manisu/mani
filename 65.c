#include<stdio.h>
void main()
{
int a,b,sum;
printf("\n enter the two numbers");
scanf("%d",&a);
scanf("%d",&b);
sum=a+b;
if(sum%2==0)
printf("\n even");
else
printf("\n odd");
getch();
}

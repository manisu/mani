#include<stdio.h>
void main()
{
int i,f=1,n;
printf("\n enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("\n factorial of the given number is%d",f);
getch();
}

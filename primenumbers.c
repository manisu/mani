#include<stdio.h>
void main()
{
int i,a,b,flag=0;
printf("\n enter the range");
scanf("%d\t%d",&a,&b);
while(a<b)
{
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{ flag=1;
break;
}
}
if(flag==0)
print("%d",i);
a++;
}
getch();

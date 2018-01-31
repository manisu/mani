#include<stdio.h>
void main()
{
int n,n1,p,q=0;
printf("\n enter the number");
scanf("%d",&n);
n1=n;

while(n!=0)
{
p=n%10;
q=q*10+p;
n=n/10;
}
if(n1==q)
printf("\n the given number is palindrome");
else
printf("\n the number is not a palindrome");
getch();
}

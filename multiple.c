#include<stdio.h>
void main()
{
int i,multiple,n;
printf("\n enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
multiple=i*n;

printf("%d\t",multiple);
}
getch();
}

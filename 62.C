#include<stdio.h>
#include<string.h>
void main()
{
int a[50];
int i;
printf("\n enter the elements");
gets(a);
for(i=0;a[i]!="\0";i++)
{
if((a[i]==0)&&(a[i]==1))
{
printf("\n binary representation");
}
else
{
printf("\n no binary representation");
}
}
getch();
}

#include<stdio.h>
void main()
{
int a=20;
clrscr();
printf("enter the number:");
scanf("%d",&a);
if(a==0)
{
printf("zero");
}
else if(a>0)
{
printf("positive");
}
else
{
printf("negative");
}
getch();
}

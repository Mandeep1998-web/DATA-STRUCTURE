// write a program to show the fibonacci series
#include<stdio.h>
#include<conio.h>
void main()
{
int num,x=-1,y=1,z,i;
printf("Enter the number of upto where you want to get fibonacci sereies\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
z=x+y;
printf(" %d",z);
x=y;
y=z;
}
}

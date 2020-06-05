#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,lb,ub;
printf("Enter the value of the lower bound and last bound\n");
scanf("%d%d",&lb,&ub);
for (i=lb+1;i<=ub;i++)
{
  for(j=2;j<i;j++)
  {
   if(i%j==0)
   break;
  }
if(j==i)
printf(" %d",i);
  }
}

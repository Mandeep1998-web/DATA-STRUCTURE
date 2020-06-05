#include<stdio.h>
void main()
{
int num,i;
printf("num :");
scanf("%d",&num);
for (i=2;i<=num-1;i++)
{
    if (num%i==0)
   break;
}
if(i==num)
     printf("prime number");
   else

   printf("not a prime number");


}


// write a program that show the reverse of a number
#include<stdio.h>
int main()
{
int num,sum=0,rem;
printf("Enter the number which you want to get the reverse of \n");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
printf("The reverse of the number is %d",sum);

}


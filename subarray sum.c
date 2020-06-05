// write a program to find the continuous subarray which adds to a given number s
#include<stdio.h>
int main()
{
int result,i,arr[10]={1,4,20,3,10,5} ,sum=5;
for(i=0;i<=9;i++)
{
if(sum==arr[i])
printf("\nthe index is %d\n",i);
else
result=arr[i]+arr[i+1];

if(result==sum)
printf("\nthe indices of subarray sum is %d\n",arr[i]);
}
}

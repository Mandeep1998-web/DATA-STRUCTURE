// write a program to search an element using binary search
#include<stdio.h>
int main()
{
int size,lowerbound,upperbound,arr[50],item,i,middle=(lowerbound+upperbound)/2,location;
printf("Enter the size of the element \n");
scanf("%d",&size);
printf("Enter the elements \n");
for(i=1;i<=size;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the value to find\n");
scanf("%d",&item);
lowerbound=0,upperbound=size;
middle=(lowerbound+upperbound)/2;
while(lowerbound<=upperbound && arr[middle]!=item)
{
    if(arr[middle]<item)
lowerbound=middle+1;
else(arr[middle]>item)
upperbound=middle-1;
}
if(arr[middle]==item)
location=middle;
else
printf("NOT FOUND ! %d is not present in the list ",item);
}

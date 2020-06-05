// write a program to insert an element in an array
#include<stdio.h>
int main()
{
int arr[50],i,element,location,size;
printf("Enter the size of the array  :\n");
scanf("%d",&size);
printf("Enter the elements           :\n");
for(i=1;i<=size;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the element you want to insert in an array       :\n");
scanf("%d",&element);
printf("Enter the location where you want to insert the element:\n");
scanf("%d",&location);
i=size;
while(i>=location)
{
 arr[i+1]=arr[i];
 i--;
}
arr[location]=element;
printf("After insertion the elements are                       :\n");
for(i=1;i<=size+1;i++)
printf(" %d",arr[i]);
}

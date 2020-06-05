#include<stdio.h>
int main()
{
int i,size,arr[50],location;
printf("Enter the size of the array     :\n");
scanf("%d",&size);
printf("Enter the elements of the array :\n");
for(i=1;i<=size;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the location from where you want to delete an element:\n");
scanf("%d",&location);
//printf("Now i want to delete an element from array\n");
i=location;
while(i<=size)
{
arr[i]=arr[i+1];
i++;
}
for(i=1;i<=size-1;i++)
printf(" %d",arr[i]);

}

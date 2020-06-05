// write a program to find the element using linear search
#include<stdio.h>
int main()
{
int location,arr[50],i,size,element;
printf("Enter the size of the array          :\n");
scanf("%d",&size);
printf("Enter the elements of the array      :\n");
for(i=1;i<=size;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the item which you want to search:\n");
scanf("%d",&element);
arr[size+1]=element;
location=1;
while(arr[location]!=element)
{
location++;
if(arr[location]=arr[size+1])
    printf(" \nSuccessful Case:\n The location of the element is %d ",location);
else
printf("Unsuccesful Case");
}

}


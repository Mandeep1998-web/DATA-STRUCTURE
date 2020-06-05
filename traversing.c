// write a program in c to traverse the elements in an array
#include<stdio.h>
int main()
{
int i,size,arr[50];
printf("Enter the size of the array         :\n");
scanf("%d",&size);
printf("Enter the elements of the array     :\n");
for(i=1;i<=size;i++)
{
scanf("%d",&arr[i]);
}
printf("\nThe elements after traversing are  :\n");
 i=1;
while(i<=size)
{
printf(" %d",arr[i]);
i++;
}
getch();
}

#include<stdio.h>
int main()
{
int i,j,rows,columns,a[10][10],Total=0;
printf("please Enter Number of rows and columns :");
scanf("%d%d",&i,&j);
printf("Enter the Matrix Elements\n");
for(rows=0;rows<i;rows++)
{
for(columns=0;columns<j;columns++)
{
scanf("%d",&a[rows][columns]);
}
}
for(rows=0;rows<i;rows++)
{
for(columns=0;columns<j;columns++)
{
if(a[rows][columns]==0)
{
Total++;
}
}
}
if(Total>((rows*columns)/2))
{
printf("\n The Matrix that you entered is  a sparse matrix");
}
else
{
printf("\n The Matrix that you entered is not a sparse matrix");
}
}

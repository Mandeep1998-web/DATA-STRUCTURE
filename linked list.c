// creation of list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *link;// because it makes node
};
struct node *first;
void main()
{
void create();
create();
getch();
}
void create()
{
int count,null;
struct node *ptr,*nptr;
ptr =(struct node*)malloc(sizeof(struct node));
printf("enter the info part of the node :");
scanf("%d",&count);
first=ptr;
printf("Enter 1/0 for more node :");
scanf("%d",&count);
while(count==1)
{
nptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the info part of the node :");
scanf("%d",&nptr->info);
ptr->link=nptr;
ptr=nptr;
printf("Enter 1/0 for more node :");
scanf("%d",&count);
}
ptr->link=null;
}


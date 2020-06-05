// write a program to create link list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int info ;
struct node *link;
};
struct node *First;// first is like head
void main()
{
void create();// declartion
void display();// declaration
create();// call
display();//call
getch();
}
void create()
{
int count,null;
struct node *ptr,*nptr;
ptr=(struct node *)malloc(sizeof(struct node));
printf("Enter the information part\n");
scanf("%d",&count);
First=ptr;
printf("Enter 1/0 for more node");
scanf("%d",&count);
while(count==1)
{
nptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the info part of node");
scanf("%d",&nptr->info);
ptr->link=nptr;
ptr=nptr;
printf("Enter 1/0 for more node");
scanf("%d",&count);
}
ptr->link=null;
}
void display()
{
    int null;
struct node *ptr;
ptr=First;
while(ptr!=NULL)
{
printf("value =%d,address =%d\n",ptr->info,&ptr->info);
ptr=ptr->link;
}
}

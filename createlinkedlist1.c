

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *link;// int store the address of the next node
};
  struct node *first;// first is equivalent to head
  void main()
{
  void create();
//  void insert();
  void traverse();
  create();
  traverse();
  insert();
  traverse();
  getch();
}
  void create()
{
  int count;
  struct node *ptr,*nptr;
  ptr=(struct node *)malloc(sizeof(struct node));
  printf("enter the information part");
  scanf("%d",&ptr->info);// this is for the first node
  first=ptr;
  printf("enter 1/0 for more node");
  scanf("%d",&count);
  while(count==1)
{
  nptr=(struct node *)malloc(sizeof(struct node));
  printf("enter the information part");
  scanf("%d",&nptr->info);
  ptr->link=nptr;
  ptr=nptr;
  printf("enter 1/0 for more node");
  scanf("%d",&count);
}
  ptr->link=NULL;
}
 void traverse()
{
  struct node *ptr;
  ptr=first;
  while(ptr!=NULL)
{
  printf("value = %d , address= %d \n",ptr->info,&ptr->info);
  ptr=ptr->link;
}
}
  void insert()
{
  int item;
  struct node *ptr,*loc;
  printf("enter the item to be inserted and the location of node");
  scanf("%d %d",&item,&loc);
  ptr=(struct node *)malloc(sizeof(struct node));
  ptr->link=loc->link;
  loc->link=ptr;
  ptr->info=item;
}


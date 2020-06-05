
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *link;
};
  struct node *first;// first is the pointer variable to the structure node
  void main()
{
  void create();
  void insert_element();
  void delete_element();
  void traverse();
  create();
  traverse();
  insert_element();
  delete_element();
  traverse();
  getch();
}
  void create()
{
  int count;
  struct node *ptr,*nptr; // here ptr is for current node and nptr for next node
  ptr=(struct node *)malloc(sizeof(struct node));// here in ptr we have the address of the struct node
  printf("enter the information part");
  scanf("%d",&ptr->info);// here i store the info part of the first node
  first=ptr;// here i assign the address of first node to first pointer variable
  printf("enter 1/0 for more node");// it is used for the next node
  scanf("%d",&count);
  while(count==1)// it runs upto where the value of count=1
{
  nptr=(struct node *)malloc(sizeof(struct node));// here i take the address of the next node
  printf("enter the information part");
  scanf("%d",&nptr->info);// here i take the address of next node
  ptr->link=nptr;//ptr link part attach to the next node nptr
  ptr=nptr;//i give the value of nptr to ptr
  printf("enter 1/0 for more node");
  scanf("%d",&count);
}
  ptr->link=NULL;// this is for the last node
}
 void traverse()
{
  struct node *ptr;
  ptr=first;// ptr points to the node that is currently being processed
  while(ptr!=NULL)
{
  printf("value = %d , address= %d \n",ptr->info,&ptr->info);
  ptr=ptr->link; //  for update means incremented by 1
}
}
  void insert_element()
{
  int item;
  struct node *new,*loc;
  printf("enter the item to be inserted and the location of node");
  scanf("%d %d",&item,&loc);
  new=(struct node *)malloc(sizeof(struct node));
  new->link=loc->link;
  loc->link=new;
  new->info=item;
}
  void delete_element()
{
  struct node *new, *loc *locp;
  printf("enter  the location of node which you want to delete and its previous location");
  scanf("%d%d",&loc,&locp);
  new=(struct node *)malloc(sizeof(struct node));
  locp->link=loc->link;
  loc->link=avail;
  avail=loc;
}



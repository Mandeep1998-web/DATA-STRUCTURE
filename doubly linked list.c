// doubly linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
};
struct node *head , *newnode;
struct node *temp;
void main()
{
    void create();
    void display();
    create();
    display();
}
void create()
{
head=0;

int choice=1;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
if(head==0)
{
head=newnode;
}
else
{
temp->next=newnode;
newnode->prev=temp;
temp=newnode;
printf("Do you want to continue");
scanf("%d",&choice);
}
}
}
void display()
{
    struct node *ptr;
    printf("\n printing values...");
    temp=head;
    while(temp!=NULL)
    {
    printf("the value =%d and the address is %d",temp->data,&temp->data);
   temp=temp->next;
}
}

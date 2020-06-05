// implementation of circular linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *head;
int main()
{
void createcll();
void display();
createcll();
display();
getch();
}
void createcll()
{
int count;
struct node *newnode,*nptr;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the value of the first node");
scanf("%d",&newnode->data);
head=newnode;
printf("Enter 1/0 for proceed or next\n");
scanf("%d",&count);
while(count==1)
{
nptr=(struct node *)malloc(sizeof(struct node));
printf("%d",&nptr->data);
newnode->link=nptr;
newnode=nptr;
printf("press 1/0 for proceed or exit ");
scanf("%d",&count);
}
newnode->link=head;
}
void display()
{
struct node *newnode;
while(newnode!=NULL)
{
printf("%d",newnode->data);
newnode=newnode->link;
}
}

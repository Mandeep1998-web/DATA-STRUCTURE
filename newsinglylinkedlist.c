#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node *head;
struct node* create_node(int);
void insert_node_beg();
void insert_node_last();
void insert_node_pos();
void delete_node_first();
void delete_node_last();
void delete_pos();
void display();
int main()
{
int ch;
char ans ='Y';
while (ans== 'Y' ||ans=='y')
{
   printf("\n.....................");
   printf("\n operations on singly linked list\n");
   printf("\n.....................");
   printf("\n 1 firstly create a link list");
   printf("\n 2.INSERT NODE AT BEG");
   printf("\n 3.INSERT NODE AT END");
   printf("\n 4.INSERT NODE AT SPECIFIED POSTION");
   printf("\n 5.DELETE NODE FROM BEGINNING");
   printf("\n 6.DELETE NODE FROM END");
   printf("\n 7.DELETE NODE FROM SPECIFIED POSITON");
   printf("\n 8.DISPLAY");
   printf("\n 9. EXIT");
   printf("\n ~ ~ ~~ ~ ~~ ~ ~~~ ~ ~~ ~~ ~~ ~");
   printf("\nEnter your choice :");
   scanf("%d",&ch);

 switch (ch)
 {
 case 1:
    printf("firstly create the linked list\n");
    create();
    break;
 case 2:
 printf("\nINSERT NODE AT FIRST POSITION");
 insert_node_first();
 break;

 case 3:
 printf("\n INSERT NODE AT LAST POSITION");
 insert_node_last();
 break;

 case 4:
 printf("\n INSERT NODE AT SPECIFIED POSTION\n");
 insert_node_pos();
 break;

 case 5:
 printf("\n DELETE NODE FROM BEGINNING");
 delete_node_first();
 break;

 case 6:
 printf("\n DELETE NODE FROM END");
 delete_node_last();
 break;

 case 7:
 printf("\n DELETE NODE FROM SPECIFIED POSTION");
 delete_pos();
 break;

 case 8:
 printf("\n DISPLAY\n");
 display();
 break;

 case 9:
 printf("\n EXIT");
 return 0;
 break;

 default:
 printf("\n invalid choice");
 break;

 printf("\n do you want to continue (Y/N)");
 scanf("%c",&ans);
 }
}
 return 0;
}

void create()
{
int count;
struct node *ptr,*nptr;
ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the info part");
scanf("%d",&ptr->data);
head=ptr;
printf("enter 1/0 for proceed or halt");
scanf("%d",&count);
while(count==1)
{
nptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the info part ");
scanf("%d",&nptr->data);
ptr->link=nptr;
ptr=nptr;
printf("Enter 1/0 for proceed or halt");
scanf("%d",&count);
}
ptr->link=NULL;
}
void display()
{
struct node *ptr;
ptr=head;
while(ptr!=NULL)
{
printf("\n%d %d",ptr->data,&ptr->data);
ptr=ptr->link;// for update_val()
}
}
void insert_node_pos()
{
int item;
struct node *ptr, *loc;
printf("Enter the item to be inserted and location of node");
scanf("%d %d",&item,&loc);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->link=loc->link;
loc->link=ptr;
ptr->data=item;
}
void delete_pos()
{
int item;
struct node *locp,*loc,*ptr;
printf("\nEnter the item to delete and location of node and previous node");
scanf("%d%d%d",&item,&loc,&locp);
ptr=(struct node*)malloc(sizeof(struct node));
locp->link=loc->link;
free(loc);
}
void delete_node_first()
    {
struct node *temp;
if(head == NULL)
{
printf("\nList is empty");
}
else
{
    temp = head;
    head = temp->link;
    free(temp);
    printf("\n Node deleted from the begining ...");
        }
    }
void insert_node_first(){
struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the info part\n");
scanf("%d",&ptr->data);
ptr->link=head;
head=ptr;
}
void insert_node_last(){
struct node *ptr, *temp;
ptr=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the info part\n");
scanf("%d",&ptr);
ptr->link=NULL;
while(temp->link!=NULL)
{
    temp=temp->link;
}
temp->link=ptr;
}

void delete_node_last()
{
    struct node *prevnode,*temp;
    temp=head;
    while(temp->link!=NULL)
    {
        prevnode=temp;
        temp=temp->link;
    }
    if(temp==head)// means we have only one node
    {
        head=0;
        free(temp);
    }
    else
        prevnode->link=NULL;
        free(temp);
}



// write a program to insert and delete an element in beg and end of position
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node* create_node(int);
struct node *head;
void insert_node_first();
void insert_node_last();
void delete_node_first();
void delete_node_last();
void display();
struct node *newnode,*ptr,*nptr,*temp;
void main()
{
int ch;
char ans ='y';
while (ans=='y' || ans=='Y')
{
printf("\n 1. insert node at first position ");
printf("\n 2. insert node at last position");
printf("\n 3. delete node at fist position   ");
printf("\n 4. delete node at last position");
printf("\n 5. display ");
printf("\nEnter your choice ");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("Insert at first position..it runs \n");
insert_node_first();
break;

case 2:
printf("Insert at last position \n");
insert_node_last();
break;

case 3:
printf("Delete from first position \n");
delete_node_first();
break;

case 4:
printf("Delete from last position \n");
delete_node_last();
break;

case 5:
printf("display the linked list\n");
display();
break;

default:
printf("Invalid choice\n");
break;
}
printf("Do you want to continue y/N");
scanf("%c",&ans);
}

}

void create()
{
int count;
struct node *ptr , *nptr;
ptr=(struct node *)malloc(sizeof(struct node));
printf("Enter the information part\n");
scanf("%d",&ptr->data);
head=ptr;
printf("Enter 1/0 for more node\n");
scanf("%d",& count);
while(count==1)
{
nptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the info part\n");
scanf("%d",&nptr->data);
ptr->link=nptr;
ptr=nptr;
printf("Enter 1/0 for more node");
scanf("%d",&count);
}
ptr->link=NULL;
}
void insert_node_first()
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the info part \n");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=newnode;
newnode->link=head;
head=newnode;
}
}
printf("\n inserted");
void insert_node_last()
{
struct node *head,*newnode,*temp;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the info part\n");
scanf("%d",&newnode->data);
newnode->link=0;
while(temp->link!=0)
{
temp=temp->link;
}
temp->link=newnode;
}
void delete_node_first()
{
struct node *temp;
temp=head;
head=head->link;
free(temp);
}
void delete_node_last()
{
struct node *prevnode;
temp=head;
while(temp->link!=0)
{
prevnode=temp;
temp=temp->link;
}
if(temp==head)
{
head=0;
free(temp);
}
else
{
prevnode->link=0;
free(temp);
}

}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
printf("%d%d",ptr->data,&ptr->data);
ptr=ptr->link;
    }
}





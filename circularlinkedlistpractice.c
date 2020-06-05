// how to create circular linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *head;
void create_cll();
void display();
int main()
{

char ans='Y';
int ch;

while (ans=='Y' || ans=='y')
{
printf("\n press 1 for create \n");
printf("\n press 2 for display\n");
printf("\nEnter your choice\n");
scanf("%d",&ch);
switch(ch )
{
  case 1:
      printf("\nplease enter the values for the circular linked list\n");
        create_cll();
        break;
  case 2:
    printf("\n display the ciruclar linked list\n");
    display();
    break;
  default:
    printf("invalid choice");
    break;
}
printf("\n do you want to continue (Y/N) \n");
scanf("%c",&ans);
}
return 0;
}
void create_cll()
{
int count;
struct node *ptr,*nptr;
ptr=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the info part\n");
scanf("%d",&ptr->data);
head=ptr;
printf("\n press 1/0 for proceed and halt\n");
scanf("%d",&count);
while(count==1)
{
nptr=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the info part\n");
scanf("%d",&nptr->data);
ptr->link=nptr;
ptr=nptr;
printf("\n press 1/0 for proceed and halt");
scanf("%d",&count);
}
ptr->link=head;
}
void display()
{
struct node *ptr;
head=ptr;
while(ptr!=head)
{
printf("%d %d",ptr->data,&ptr->data);
ptr=ptr->link;
}
printf("%d",ptr->data);
}

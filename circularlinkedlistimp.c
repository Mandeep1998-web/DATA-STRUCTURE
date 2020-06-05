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
void create_cll();// declaration
void display();
 int main()
 {
    int ch;
    char ans = 'Y';

    while (ans == 'Y'||ans == 'y')
    {
        printf("\n---------------------------------\n");
        printf("\nOperations on singly linked list\n");
        printf("\n---------------------------------\n");
        printf("\n1.create");
        printf("\n2.display");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\nEnter your choice");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n...creating linked list...\n");
  create_cll();
            break;
        case 2:
            printf("\n...display...\n");
       display();
            break;

        default:
            printf("\n...Invalid Choice...\n");
            break;
        }
        printf("\nYOU WANT TO CONTINUE (Y/N)");
        scanf(" %c", &ans);
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
ptr=head;
while(ptr->link!=head)
{
printf(" %d %d\n", ptr->data, &ptr->data);
ptr=ptr->link;
}
printf(" %d %d",ptr->data,&ptr->data);
printf("\n %d",ptr->link->data);
}

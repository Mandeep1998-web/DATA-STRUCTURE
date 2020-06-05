// implementation of circular linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *link;
};
struct node *first;
void main()
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
struct node *ptr,*nptr;
ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the value of the first node ");
scanf("%d",&ptr->info);
first=ptr;
printf("\nEnter 1/0 for proceed or next\n");
scanf("%d",&count);
while(count==1)
{
nptr=(struct node *)malloc(sizeof(struct node));
printf("Enter the information part ");
scanf("%d",&nptr->info);
ptr->link=nptr;
ptr=nptr;
printf("\nEnter 1/0 for new node\n");
scanf("%d",&count);
}
ptr->link=first;
}
void display()
{
struct node *ptr;
ptr=first;
printf("The values of the circular linked list :\n");
while(ptr->link!=first)
{
printf("%d %d\n",ptr->info,&ptr->info);
ptr=ptr->link;
}
printf("%d %d",ptr->info,&ptr->info);
printf("\n%d %d",ptr->link->info,&ptr->link);
}

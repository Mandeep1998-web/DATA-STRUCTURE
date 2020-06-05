#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int info;
struct node *link;
};
struct node *first;
void main()
{
    void create();
void display();
void insert();
    create();
    display();
    insert();
    display();
    getch();
}
void create()
{
    int count;
struct node *ptr,*nptr;
ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the info part\n");
scanf("%d",&ptr->info);
first=ptr;// in ptr what we have address so in first what we pass is address
printf("press (1/0) to proceed\n");
scanf("%d",&count);
while(count==1)
{
    nptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the info part\n");
    scanf("%d",&nptr->info);
    ptr->link=nptr;
    ptr=nptr;
printf("Enter (1/0) to proceed\n");
scanf("%d",&count);
}
ptr->link=NULL;
}
void display()
{
    struct node *ptr;
    ptr=first;
    while(ptr!=NULL)
    {
        printf("value =%d  addres =%d\n",ptr->info,&ptr->info);
    ptr=ptr->link;
}
}
void insert(){
    int item;
struct node *ptr,*loc;
printf("Enter the item and location of the insertion\n");
scanf("%d%d",&item,&loc);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->link=loc->link;
loc->link=ptr;
ptr->info=item;
}



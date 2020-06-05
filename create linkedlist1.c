// create a link list and display it
struct node{
int info;
struct node *link;
};
struct node *first;// this is like head
int count;
void create();
void display();
void main()
{
create();
display();
getch();
}
void create()
{
struct node *ptr,*nptr;// ptr is for current node and nptr is for next pointer
ptr=(struct node*)malloc(sizeof(struct node));
printf("enter the info part of the ptr \n");
scanf("%d",&ptr->info);
printf(" press (1/0) for further entries  \n");
scanf("%d",&count);
first=ptr;
while(count==1)
{
nptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the info part of the ptr\n");
scanf("%d",&nptr->info);
ptr=nptr;
ptr=ptr->link=null;
}

}

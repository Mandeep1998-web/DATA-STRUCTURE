// stack implementaion using array

#include<stdio.h>
#include<conio.h>
#define num 5 // macro definition
int stack[num]; // stack is the array name and num is the size
int top=-1;

void push()
{
    int item;
printf("\n Enter the item\n");
scanf("%d",&item);
if(top == num-1)
{
    printf("\noverflow");
}
else
{
    top++;
   stack[top]=item;
}
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        item=stack[top];
        top--;
    printf("%d\n",item);
    }
    }

void peek()
{
    if(top==-1)
    printf("stack is empty");
    else
    printf("%d\n",stack[top]);
}

void display()
{
int i;
for(i=0;i<=top;i++)
{
printf("\n %d",stack[i]);
}

}
void main()
{
int ch;
do
{
printf("\n press 1 for push \n press 2 for pop\n press 3 for peek\n press 4 for display\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
printf("\npush will be operated\n");
break;
case 2:
pop();
printf("\npop will be operated\n");
break;
case 3:
peek();
printf("\npeek will be operated\n");
break;
case 4:
    display();
    printf("\ndisplaying the item in the list\n");
    break;

default:
    printf("invalid choice\n");

}
}
while (ch!=0);
getch();
}

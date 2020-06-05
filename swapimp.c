// write a program to exchange the values of a and b
#include<stdio.h>
void swap (int a, int b);
void main()
{
int a=10,b=20;
swap(a,b);
}
void swap (int a, int b)
{
a=a+b;
b=a-b;
a=a-b;
printf("the value of a is %d\n",a);
printf("the value of b is %d",b);
}

//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
Int input()
{
Int a;
printf(“Enter a number\n);
scanf(“%d”,&a);
Return a;
}
Int find_sum(int a,int b)
{
Int sum;
sum=a+b;
return sum;
{
Void output(int a,int b,int c)
{
printf(“Sum of %d+ %d is %d\n” , a,b,c);
}
Int main()
{
Int x,y,z;
x=input();
y=input();
z=find_sum(x,y);
output(x,y,z);
Return 0;
}

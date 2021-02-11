//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
    float h,d,b;
    float volume;
    printf("Enter value of h:");
    scanf("%f",&h);
    printf("Enter value of b:");
    scanf("%f",&b);
    printf("Enter value of d:");
    scanf("%f",&d);
    volume=((h*b*d)+(d/b))/3;
    printf(" volume = %f\n",volume);
    return 0;
}

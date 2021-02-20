//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include<math.h>
float input(char b[])
{
float a;
printf("Enter the value of %s: ",b);
scanf("%f",&a);
return a;
}
float compute_distance(float x1,float y1,float x2,float y2 )
{
float dist;
dist=sqrt((x2-x1)(x2-x1)+(y2-y1)(y2-y1));
return dist;
}
void output(float res)
{
printf("Distance between two points: %f",res);
}
int main()
{
float x1,y1,x2,y2,res;
x1=input("x1");
x2=input("x2");
y1=input("y1");
y2=input("y2");
res=compute_distance(x1,y1,x2,y2);
output(res);
return 0;
}


Do not refer to class notes.
Do not take help from  a friend.
Do not look up the internet.
This code is not evaluated.
Do not change this code after compilation.
This is a record of your beginning point of learning.

(Type your program here)

Step 3: Copy & paste your program into your repository and commit.

Step 4: Run the program in Online GDB.

Take help if you are not able to complete the activity.
See class notes if you are not able to progress.

Step 5: Single step and check every line of the program.

Step 6: Copy & paste the program from Online GDB here below.
Type the program if you are not sure you remember and understand the program Or
Copy Paste the program if you can write the program without referring to previously written program ( Class notes or OnlinegDB or friends programs)


#include <stdio.h>
#include<math.h>
float input(char b[])
{
float a;
printf("Enter the value of %s: ",b);
scanf("%f",&a);
return a;
}
float compute_distance(float x1,float y1,float x2,float y2 )
{
float dist;
dist=sqrt((x2-x1)(x2-x1)+(y2-y1)(y2-y1));
return dist;
}
void output(float res)
{
printf("Distance between two points: %f",res);
}
int main()
{
float x1,y1,x2,y2,res;
x1=input("x1");
x2=input("x2");
y1=input("y1");
y2=input("y2");
res=compute_distance(x1,y1,x2,y2);
output(res);
return 0;
}

#include<stdio.h>
int main(void){

int x,y,temp;
printf("Enter two numbers\r\n ");
fflush(stdin);fflush(stdout);
scanf("%d %d",&x,&y);
printf ("the x is %d and y is %d\r\n",x,y);
x=x^y;
y=x^y;
x=x^y;
printf ("the x is %d and y is %d\r\n",x,y);
x=x+y;
y=x-y;
x=x-y;
printf ("the x is %d and y is %d\r\n",x,y);
temp=x;
x=y;
y=temp;
printf ("the x is %d and y is %d\r\n",x,y);
return 0;}

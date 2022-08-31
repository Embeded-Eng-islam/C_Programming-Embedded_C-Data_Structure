#include<stdio.h>
int main (void){
char x;
int j;
scanf("%c",&x);
for(int i=65;i<=122;i++)
{
    if(i==91){ i=i+6;}

    j=x-i;
    if(j==0)
    {
        break;
    }
}
if(j==0){
    printf("Alphabit\r\n");
}
else
       printf("not Alphabit\r\n");


return 0;}

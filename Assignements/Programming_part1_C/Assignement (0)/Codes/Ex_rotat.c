#include<stdio.h>
#include<string.h>
void rotat(int x){
int y;
while(x)
    {y=x%10;
    printf("%d",y);
    x=x/10;
    }
}
int main(){
    int num;
printf("Enter the number \n");
scanf("%d",&num);
rotat(num);
return 0;}

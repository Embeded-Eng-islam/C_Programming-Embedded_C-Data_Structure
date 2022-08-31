#include<stdio.h>
int SumDigit(int x){
if(x)
    return x%10+SumDigit(x/10);
else
    return 0;
}
int main(){
int num;
   printf("Enter the number \n");
   scanf("%d",&num);
   printf(" your operation = %d \n",SumDigit(num));
return 0;}

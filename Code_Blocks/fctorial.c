#include<stdio.h>
int factorial(int x);
void main(){
printf("%d",factorial(5));
}
int factorial(int x){
int sum=1;
for(x;x>0;x--)
   sum*=x;
return sum;
}

#include<stdio.h>
int sum(int i){

if(i<=10)
   return i+sum(i+1);
else
   return 0;
}
void main(){
printf("\n%d\n",sum(1));
}

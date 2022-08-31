#include<stdio.h>
int ones(int num){
int bit,sum=0;
for(bit =31;bit>=0;bit--)
  if((num&(1<<bit))>>bit)
     ++sum;
return sum;
}
int main (){
printf(" the numer of ones in your number is %d \n",ones(236));
return 0;
}

#include<stdio.h>
void main(){
int n,bit;
printf(" Enter the number \n");
scanf("%d",&n);
printf(" Enter the number of bit \n");
scanf("%d",&bit);
printf(" your numer in binary code is  ");
for(int i=31;i>=0;i--){
    printf("%d",(n&(1<<i))>>i);
}
printf("\n");
printf(" your bit (%d) is %d",bit+1,(n&(1<<bit))>>bit);

}

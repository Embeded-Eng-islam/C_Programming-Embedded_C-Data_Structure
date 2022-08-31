#include<stdio.h>
void main(){
int x[5],sum=0;
int *px=&x;
for(int i=0;i<5;i++){
    scanf("%d",px+i);
}
for(int i=0;i<5;i++){
    printf("%d\n",*px+i);}
for(int i=0;i<5;i++)
    sum+=x[i];
printf(" the summition is %d\n",sum);

}

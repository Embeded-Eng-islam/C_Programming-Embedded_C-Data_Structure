#include<stdio.h>
void funarr(int arr[],int szie)
  {for(;szie>0;szie--)
                printf(" %d",arr[szie-1]);}
int main(){
int a[5]={1,2,3,4,5};
funarr(a,5);
return 0;}

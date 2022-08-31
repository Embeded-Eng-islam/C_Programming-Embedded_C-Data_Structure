#include<stdio.h>
int main (){
int arr[5]={100,20,300,22,0};
int temp;
for(int i=0;i<5-1;i++){
   for(int j=0;j<5-i;j++){
       if(arr[j]>arr[j+1])
          {
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
          }
       }
     }
for(int i=0;i<5;i++){
     printf("%d ",arr[i]);
}
return 0;}

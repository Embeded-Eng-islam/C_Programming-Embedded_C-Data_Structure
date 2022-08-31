#include<stdio.h>
int main(){
int arr[8]={5,6,9,1,200,0,2,3};

for(int i=0;i<7;i++){
        for(int j=0;j<8-i-1;j++){
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j+1]^arr[j];
                arr[j+1]=arr[j+1]^arr[j];
                arr[j]=arr[j+1]^arr[j];
            }
        }
}

for(int i=0;i<8;i++)
    printf(" %d",arr[i]);


return 0;}

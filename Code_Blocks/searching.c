#include<stdio.h>

void main(){
int arr[30];
int i,num;
int y_num;
printf(" Enter the counting of the array \r\n");
scanf("%d",&num);
printf(" Enter the numbers of the array \r\n");
for(  i=0;i<num;i++){
    scanf("%d",&arr[i]);
}
printf(" Enter the num that you search about it \r\n");
scanf("%d",&y_num);

for( i=0;i<num;i++){
    if(arr[i]==y_num){
        break;
    }
}
if(i<num){
    printf("The number is existed and thier location = %d\r\n",i+1);
}
else
    printf("The number isn't existed \r\n");

    }

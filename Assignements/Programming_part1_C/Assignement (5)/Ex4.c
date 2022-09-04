#include<stdio.h>
void main(){
char arr[15];
char *ptr,n;
printf("Enter the number element of the arr max is 15\n");
scanf("%d",&n);
ptr=arr;
printf("Enter the elements of the arr max is 15\n");
for(int i=0;i<n;i++)
{
    scanf("%d",ptr);
    ptr++;
}
printf("*******************************************\n")
;ptr=&arr[n-1];
for(int i=n;i>0;i--){
    printf("%d\n",*ptr);
    ptr--;
}
}

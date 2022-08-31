#include<stdio.h>
#include<string.h>
void main(){
char arr[30]="Isolam";
int i=1;
int j;
int temp;
j=strlen(arr)-1;
for (i=0;i<=j;i++){

    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
printf("%s\n",&arr);
 }

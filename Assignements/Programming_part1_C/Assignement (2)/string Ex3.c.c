#include<stdio.h>
#include<string.h>
void main(){
	 char arr[20];
	 char brr[20];
	 printf("enter your string \r\n");
	 scanf("%s",&arr);
	 int x;
	 x=strlen(arr)-1;
	 for(int i=0;i<20;i++){
            brr[x]=arr[i];
            x--;
            if(arr[i]==0)
              {
                 break;}
            }

	 brr[strlen(arr)]=0;

printf("%s\n\r",brr);
	 }

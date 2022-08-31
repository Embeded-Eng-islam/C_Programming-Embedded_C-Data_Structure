#include<stdio.h>
#include<string.h>
void main(){
	char arr[200];
	char a;
	int counter=0;
	printf(" enter your string\n\r");
	gets(arr);	printf(" enter your letter\n\r");
	scanf("%c",&a);
	for(int i=0;arr[i]!=0;++i){

		if(arr[i]==a){
			counter++;}

	}
	printf(" the frequncy of %c  in the string   is %d  \n\r",a,counter);

}

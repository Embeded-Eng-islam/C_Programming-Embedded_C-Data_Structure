/*
 ============================================================================
 Name        : revers.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
#include<string.h>
void revers(char arr[]);
int main(void){
	char stR[50];
	printf("enter your string \r\n");
	gets(stR);
	revers(stR);
	return 0;
}
void revers(char arr[]){
	char brr[50];
	int j=0;
	for(int i=0;i<50;i++){
		if(arr[i]==' '){
    for(j=0;j<50;j++){
		i++;
		if(arr[i]==0)
		{  brr[j]=' ';
		    break;}
		brr[j]=arr[i];}}}

	j=strlen(brr)-1;
	for(int i=0;i<50;i++){
	   brr[j]=arr[i];
        ++j;
        if(arr[i]==' ')
		{break;}
                    }
	brr[strlen(arr)+1]=0;
    printf("%s",brr);
}


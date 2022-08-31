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
	char stR[20];
	printf("enter your string \r\n");
	gets(stR);
	revers(stR);
	return 0;
}
void revers(char arr[]){
	char brr[50];
	int x=0;
	for(int i=0;i<50;i++){

		if(arr[i]==' ')
		{  for(int j=0;j<50;j++)
		    brr[x]=arr[i+1];

			}

		x++;
		if(arr[i]==0)
		{
			break;}
	}

	brr[strlen(arr)]=0;

	printf("%s\n\r",brr);
}


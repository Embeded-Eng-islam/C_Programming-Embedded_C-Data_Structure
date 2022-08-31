/*
 * string5.c
 *
 *  Created on: Jul 30, 2022
 *      Author: ELBOSTAN
 */


#include<stdio.h>
void main(){
	char names [5][10]={"islam","mohammed","zain","husssin","sayed"};
	char name[10];
	int i;
	printf(" Enter your string :\n\r");
	scanf("%s",&name);
	for( i=0;i<5;i++){
		if(strcmp(name,names[i])==0){
			printf("congratulations your name existed in the list \r\n");
			break;
		}
	}
	if(i==5){
		printf("sorry your name isn't existed in the list \r\n");
	}


}

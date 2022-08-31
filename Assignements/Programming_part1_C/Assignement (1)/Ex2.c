/*
 * tests.c
 *
 *  Created on: Jul 21, 2022
 *      Author: ELBOSTAN
 */
#include <stdio.h>
void main(void){

	int num1,num2,num3;
	printf(" enter the three number : \r\n");
	fflush(stdin); 	fflush(stdout);
	scanf("%d %d %d",&num1,&num2,&num3);
	if( num1>num2){
		if( num1>num3)
		{ printf("the largest number = %d",num1);}
		else { printf("the largest number = %d",num3);}}
	else {
		if( num2>num3){ printf("the largest number = %d",num2);}
		else { printf("the largest number = %d",num3);}
	}

}

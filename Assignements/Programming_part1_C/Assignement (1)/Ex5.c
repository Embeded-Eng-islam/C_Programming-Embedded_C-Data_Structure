/*
 * calculator.c
 *
 *  Created on: Jul 21, 2022
 *      Author: ELBOSTAN
 */
#include <stdio.h>
void main(void){
	char A;
	float a,b;
	printf("\t Enter operator (+,-,*,/) : \n");
	fflush(stdin);fflush(stdout);

	scanf("%c",&A);
	printf(" enter the two numbers : \r\n");
	fflush(stdin); 	fflush(stdout);
	scanf("%f %f",&a,&b);
	switch(A){

	case '+':
		printf(" %f + %f = %f",a,b,a+b);
		break;
	case '-':
		printf(" %f - %f = %f",a,b,a-b);
		break;
	case '*':
		printf(" %f * %f = %f",a,b,a*b);
		break;
	case '/':
			printf(" %f / %f = %f",a,b,a/b);
			break;
	default :
		printf(" no thing");
		break;
	}
}


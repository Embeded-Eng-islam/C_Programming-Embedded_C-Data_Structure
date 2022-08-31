#include <stdio.h>
#include <stdlib.h>

void  main(void) {
	float grad[10];
	int i;
	for(i=0;i<10;i++){
		printf(" enter the %d grade\r\n",i+1);
		fflush(stdin);fflush(stdin);
		scanf("%f",&grad[i]);

	}
	for(i=0;i<10;i++){
		printf(" the  %d  grade is  %f\r\n",i+1,grad[i]);}
}


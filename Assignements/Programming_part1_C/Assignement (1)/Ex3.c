#include <stdio.h>
void main(void){
	char choice;
	float radius ;
	float area,surrunding;
	printf("  Enter your choice area(A) or surrundings (B) \n" );
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);
	printf("  Enter radius \n" );
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);
	if(choice=='A'){
		area=3.14*radius*radius;
		printf("  \r\nthe area : %f\n",area );
	}
	else if (choice=='B'){
		surrunding=3.14*2*radius;
		printf(" \r\n the surrunding : %f\n",surrunding );
	}
	else {printf("  Hahhahahahaha \n" );}

}

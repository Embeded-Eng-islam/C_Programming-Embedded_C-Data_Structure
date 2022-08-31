#include<stdio.h>
int main (){
	int num,power,result=1;
	printf(" Enter the number and power\r\n");

	scanf(" %d  ",&num);

	scanf("  %d ",&power);
	for(;power>0;power--){
		result *=num;
	}

	printf("  the  result = %d\r\n",result);
	return 0;}


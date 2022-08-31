#include <stdio.h>
void main(void){

	int a, f=1;
	printf("  Enter the num  \r\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	if (a<0){
		printf("  nothing  \r\n");
	}


	else {
		for(int i=1;i<=a;i++)
				f*=i;
		printf("  %d\r\n",f);
	}


}

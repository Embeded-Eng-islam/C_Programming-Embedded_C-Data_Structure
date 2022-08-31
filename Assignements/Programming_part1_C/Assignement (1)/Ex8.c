#include<stdio.h>
void main (){
	int coun,num;
	int sum=0;
	printf("  Enter the num of sum\r\n");
	scanf("%d",&num);
	coun=0;
	while(coun<num){
		sum=sum+coun;
		coun++;
	}
	printf("  the sum is %d\r\n",sum);

}

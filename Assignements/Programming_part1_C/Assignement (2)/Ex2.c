#include<stdio.h>
#include<string.h>
void main(){
	float a[20];
	float avg,sum=0;
	int x;
	printf(" Enter the num of elements of array1\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf(" Enter the element of array1\r\n");
	for(int i=0;i<x;i++){
		scanf("%f",&a[i]);

	}
	for(int i=0;i<x;i++){
		sum=sum+a[i];

	}
	avg=sum/x;
	printf(" the avarege of array %f\r\n",avg);

}

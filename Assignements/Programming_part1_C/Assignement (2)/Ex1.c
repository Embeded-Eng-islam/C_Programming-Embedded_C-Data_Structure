#include<stdio.h>
void main(){
	float arr1[2][2], arr2[2][2],sum[2][2];
	printf(" Enter the element of 2*2 array1\r\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%f",&arr1[i][j]);
		}
	}
	printf(" Enter the element of 2*2 array2\r\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%f",&arr2[i][j]);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			sum[i][j]= arr1[i][j]+arr2[i][j];

		}
	}
	printf(" the sum  of 2*2 array2,1\r\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("    %f",sum[i][j]);
		}
		printf("    \r\n");
	}
}

#include<stdio.h>
#include <string.h>
int main(int argc, char **argv) {
	int arr[20];
	int x,temp;
	printf("enter the number of the array\r\n");
	scanf("%d",&x);
	for (int var = 0; var < x; ++var) {
		scanf("%d",&arr[var]);
	}
printf("########################################\r\n");

	for (int var = 0; var < x; ++var)
		printf("%d\r\n",arr[var]);
printf("########################################\r\n");
	for (int i = 0; i < x-1; ++i) {
		for (int j = i+1; j < x; ++j) {
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;}
		}
	}
	for (int var = 0; var < x; ++var)
		printf("%d\r\n",arr[var]);
	printf("             this is a bubble sort algorithm \r\n");
	return 0;}

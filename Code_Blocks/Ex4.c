#include<stdio.h>
#include<string.h>
void main(){
	int a[20];
	int x;
	printf(" Enter the num of elements of array1\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf(" Enter the element of array1\r\n");
	for(int i=0;i<x;i++){
		scanf("%d",&a[i]);}

	int element,location;

	printf(" Enter the element\r\n");
	scanf("%d",&element);
	printf(" Enter the location\r\n");
	scanf("%d",&location);

	for(int i=x;i>=location;i--){
		a[i]=a[i-1];
	}
	x++;
	a[location-1]=element;
	for(int i=0;i<x;i++){
		printf("%d",a[i]);}
}

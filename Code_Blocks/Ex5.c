#include<stdio.h>
#include<string.h>
void main(){
int arr1[20];
int i,num,k=0,x=0;
	printf(" Enter the num of elements of array1\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf(" Enter the element of array1\r\n");
	for(int i=0;i<num;i++){scanf("%d",&arr1[i]);}
	int element;
	printf(" Enter the element\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);
	for(int i=0;i<num;i++){
            k++;

        if(arr1[i]==element){
                x++;
            break;
        }
	}
		if(x>0){
        printf("your number is existed his location : %d \r\n",k);
	}
	else {
        printf("your number isn't existed\r\n");
	}



}

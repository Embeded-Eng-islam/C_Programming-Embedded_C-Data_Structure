#include<stdio.h>
int prime(int x);
void main(){
int num1,num2,k;
printf("Enter your intervales from two and you more\n");
scanf("%d",&num1);
scanf("%d",&num2);
for(num1;num1<=num2;num1++){
        k=prime(num1);
if(k==0)
    printf("%d\n",num1);
}
}
int prime(int x){
	int counter,flag=0;
	for(counter=2;counter<=x/2;counter++){
		if(x%counter==0){
			flag=1;
			break;}}

		return flag;

}

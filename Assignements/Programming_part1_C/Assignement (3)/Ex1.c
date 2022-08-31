#include <stdio.h>
int pow(int x,int y);
void main(){
int num1,po;
	printf("Enter your num and thier power\n");
	scanf(" %d %d ",&num1,&po);
	printf("%d",pow(num1,po));

}
int pow(int x,int y){
if(y!=0){
    return (x*pow(x,y-1));
}
else
    return 1;
}

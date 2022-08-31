#include<stdio.h>
int facto(int a);
int main(void){
int num1;
printf("Enter your number\r\n");
scanf("%d",&num1);
printf("%d",facto(num1));


}
int facto(int a){
if(a!=1)
    return a*facto(a-1);

}

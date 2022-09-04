#include<stdio.h>
void main(){
int m=29;
int* ptr;
printf("Adress of the value is 0X%X\n",&m);
printf("value is %d\n",m);
ptr=&m;
printf("Now ab is assigned with the address of m\n");
printf("Adress of the value is 0X%X\n",ptr);
printf("value is %d\n",*ptr);
m=34;
printf("The value of m assigned to 34 now.\n");
printf("Adress of the value is 0X%X\n",ptr);
printf("value is %d\n",*ptr);
*ptr=7;
printf("The pointer variable ab is assigned with the value 7 now.\n");
printf("Adress of the value is 0X%X\n",&m);
printf("value is %d\n",m);
}

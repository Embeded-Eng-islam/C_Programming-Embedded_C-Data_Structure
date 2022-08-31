#include<stdio.h>
#include<string.h>
void main(){
char a[20]="Ahmed allaa";
char b[20];
int i=0;
while(a[i]!=0){

    b[i]=rand();
    i++;
}
b[i]=0;
printf(" this is my copied string      %s\n",b);
strupr(a);
strlwr(b);
printf(" this is my copied string %s\n",a);
printf(" this is my copied string %s\n",b);
}

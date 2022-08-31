#include<stdio.h>
#include<string.h>
void main(){

char str[]="islam";
int i,j;
j=sizeof(str);
for(i=0;i<j;i++){

    str[i]=str[i]^str[j];
      str[j]=str[i]^str[j];
      str[i]=str[i]^str[j];
        --j;
}
printf("%s\r\n",str);



}

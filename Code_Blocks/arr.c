#include<stdio.h>
#include<string.h>
int main(){
char name[]="islam";
char temp;
char x=5;
printf("%d\n",!-1);
for(int i=0;i<strlen(name)/2;i++){
     x--;
    temp=name[i];
    name[i]=name[x];
    name[x]=temp;
   }
printf("%s",name);



return 0;}

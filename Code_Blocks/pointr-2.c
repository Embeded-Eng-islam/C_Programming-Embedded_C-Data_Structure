#include<stdio.h>
struct Sdata{
   char data1;
   int data2 ;
   short data3;
   int data4;
}data1;
void struct_print(char* ptr,int sizee){
for(int i=0;i<sizee;i++){
    printf(" the adress is:%X  value is:%X \n",ptr,*ptr);
      ptr++;}
}
void main(){
data1.data1=0x41;
data1.data2=0xaaffddee;
data1.data3=0x22;
data1.data4=0xaaee2233;
char*pp=&data1;
struct_print(pp,sizeof(data1));

struct Sdata* s_ptr=&data1;
printf("%x\n",(s_ptr -> data4));
printf("%x\n",*(pp+8));


}

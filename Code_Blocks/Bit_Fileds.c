#include<stdio.h>
# pragma pack(1)
struct FlagRegister{
     char Reserved ;
     int FIFO;
}Flag;
void main(){

printf ("%d",sizeof(Flag));

}

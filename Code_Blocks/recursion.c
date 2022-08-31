#include <stdio.h>
void reverse_str(char*s){
    if(*s){
    reverse_str(s+1);
    printf("%c",*s);}

}
void main(){
char *str="islam";
reverse_str(str);

}

#include <stdio.h>
void india();
void egypt();
void __attribute__((constructor)) india();
void __attribute__((destructor)) egypt();


void egypt(){
printf("I am in egypt function \r\n");
getch();
}
void india(){
printf("I am in india function \r\n");
getch();
}

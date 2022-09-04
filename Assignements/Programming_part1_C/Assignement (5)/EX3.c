#include<stdio.h>
int main(){
char str[50],revstr[50];
char* pstr;
char* prevstr;
pstr=str;
prevstr=revstr;
printf("Enter your string\n");
scanf("%s",&str);
int i=-1;
while(*pstr)
{
    pstr++;
    i++;
}
while(i>=0){
    pstr--;
    *prevstr=*pstr;
    prevstr++;
    i--;
}
*prevstr='\0';
prevstr=revstr;
printf("%s",prevstr);
return 0;
}

#include<stdio.h>
int main(){
char alp[27];
char* ptr;
ptr=alp;
for(int i=0;i<26;i++){
    *ptr=i+'A';
    ptr++;
}
ptr=alp;
printf(" The Alphapets of english :\n");
for(int i=0;i<26;i++){
   printf(" %C ",*ptr);
    ptr++;
}

return 0;
}

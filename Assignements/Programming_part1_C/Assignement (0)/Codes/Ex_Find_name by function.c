#include<stdio.h>
#include<string.h>
int find_name(char nams[][14],int n1,char name[14]);
void main(){

char names[5][14]={"islam","muhammed","mahmaud","ahmed","mustafa"};
char nam[14];
printf(" Enter your name\n");
gets(nam);
if(find_name(names,5,nam)==0){
    printf("see you soon your name isn't found\n");
}

else
    printf("Welcome your name is found\n");

}
int find_name(char nams[][14],int n1,char name[14]){
    int x=0;
for(int i=0;i<n1;i++){
    if(!strcmpi(nams[i],name)){
                   return ++x;

    }
}
return x;
}

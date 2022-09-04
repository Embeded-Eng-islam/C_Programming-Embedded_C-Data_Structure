#include<stdio.h>
 struct employee {
   char *embname;
   int embid;
};
int main(){
static struct employee emb1={"Mohammed",1001};
static struct employee emb2={"Islam",1002};
static struct employee emb3={"Abu Bakr",1003};
struct employee (*arr[])={&emb1,&emb2,&emb3};
printf(" the name is %s\n",&(*arr[2]->embname));
printf(" the id is %d\n",(arr[2]->embid));

return 0;
}

#include <stdio.h>
#include <stdlib.h>
void prime(int,int);
int main()
{ int n1,n2;

    printf("enter two numbers (intervals) : ");
   scanf("%d",&n1);

    scanf(" %d",&n2);
    printf("prime number between %d and %d is ",n1,n2);
    prime(n1,n2);

    return 0;
}
void prime(int n1,int n2){
int i,j ;
for(i=n1+1;i<n2;i++)
{
  int counter=0;
 for(j=2;j<=n1/2;j++){
   if(i%j==0)
        counter++;
 }
 if(counter==0)
    printf("%d\r\n",i);
}
}

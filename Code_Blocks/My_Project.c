#include<stdio.h>
int prime(int a);
void main (){
    int temp,n1,n2;
    // this is if the user enter the interval from larger to smaller.
    if(n1>n2){
        temp=n1;
        n1=n2;
        n2=temp;
        }
    //this varible to store the result or output of the function to check on it.
    int detect=0;
    printf("  Enter your two interval\r\n");
    scanf("%d",&n1);

    scanf(" %d",&n2);
    // this loop to check and take out our prime numbers
    for(;n1<=n2;n1++)
    {
        detect=prime(n1);
        if(detect==0)
            printf(" %d \r\n",n1);
    }
}
int prime(int a){
 int x=0;
  for(int i=2;i<=a/2;i++){
    if (a%i==0)
     {
       x=1;
        break ;
     }
  }

return x;

}

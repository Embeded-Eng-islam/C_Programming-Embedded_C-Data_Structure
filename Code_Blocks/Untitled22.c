#include<stdio.h>
int main(){
int nums[20],n;
printf("enter the number of array\n");
scanf("%d",&n);
int c;
printf("enter the elements of array\n");
for(c=0;c<n;c++){
    scanf("%d",&nums[c]);
}
int your,coun=0 ;
printf("Enter your number\n");
scanf("%d",&your);
for(c=0;c<n;c++){
if(your==nums[c])
    coun++;
}
if(c>0)
    printf("The index of your number = %d\n",c);

else
   printf("your number isn't existed\n");







return 0;}
